#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00150c30
// Address: 0x150c30 - 0x150ce0
void entry_00150c30_0x150c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150c30_0x150c30");
#endif

    switch (ctx->pc) {
        case 0x150c5cu: goto label_150c5c;
        case 0x150c9cu: goto label_150c9c;
        case 0x150cacu: goto label_150cac;
        default: break;
    }

    ctx->pc = 0x150c30u;

    // 0x150c30: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x150c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150c34: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x150c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x150c38: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x150c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x150c3c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x150c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x150c40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150c48: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x150c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x150c4c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x150c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150c50: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x150c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x150c54: 0xc04fe3c  jal         func_13F8F0
    ctx->pc = 0x150C54u;
    SET_GPR_U32(ctx, 31, 0x150C5Cu);
    ctx->pc = 0x150C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C54u;
    // 0x150c58: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8F0u, 0x150C54u, 0x150C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C5Cu;
label_150c5c:
    // 0x150c5c: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x150c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150c60: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x150c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x150c64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x150c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x150c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x150c6c: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x150c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x150c70: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x150c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150c74: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x150c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x150c78: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x150c78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x150c7c: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x150c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150c80: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x150c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x150c84: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x150c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x150c88: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x150c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x150c8c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x150c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150c90: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x150c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x150c94: 0xc054380  jal         func_150E00
    ctx->pc = 0x150C94u;
    SET_GPR_U32(ctx, 31, 0x150C9Cu);
    ctx->pc = 0x150C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C94u;
    // 0x150c98: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E00u, 0x150C94u, 0x150C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C9Cu;
label_150c9c:
    // 0x150c9c: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x150c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x150ca0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x150ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x150ca4: 0xc054380  jal         func_150E00
    ctx->pc = 0x150CA4u;
    SET_GPR_U32(ctx, 31, 0x150CACu);
    ctx->pc = 0x150CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150CA4u;
    // 0x150ca8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E00u, 0x150CA4u, 0x150CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CACu;
label_150cac:
    // 0x150cac: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x150cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x150cb0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150cb4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x150cb4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150cb8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x150cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x150cbc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x150cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x150cc0: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x150cc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x150cc4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x150cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x150cc8: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x150cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x150ccc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x150cccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150cd0: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x150cd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x150cd4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x150cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x150cd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x150CD8u;
    {
        const bool branch_taken_0x150cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150CD8u;
        // 0x150cdc: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150cd8) {
            ctx->pc = 0x150CFCu;
            return;
        }
    }
    ctx->pc = 0x150CE0u;
}
