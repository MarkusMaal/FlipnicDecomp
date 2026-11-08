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

// Function: entry_0013f6e0
// Address: 0x13f6e0 - 0x13f790
void entry_0013f6e0_0x13f6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f6e0_0x13f6e0");
#endif

    switch (ctx->pc) {
        case 0x13f70cu: goto label_13f70c;
        case 0x13f74cu: goto label_13f74c;
        case 0x13f75cu: goto label_13f75c;
        default: break;
    }

    ctx->pc = 0x13f6e0u;

    // 0x13f6e0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f6e4: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x13f6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x13f6e8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x13f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13f6ec: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x13f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13f6f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f6f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f6f8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x13f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x13f6fc: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f700: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x13f700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x13f704: 0xc04fe3c  jal         func_13F8F0
    ctx->pc = 0x13F704u;
    SET_GPR_U32(ctx, 31, 0x13F70Cu);
    ctx->pc = 0x13F708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F704u;
    // 0x13f708: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8F0u, 0x13F704u, 0x13F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F70Cu;
label_13f70c:
    // 0x13f70c: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x13f70cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f710: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13f710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13f714: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13f714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f718: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x13f718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13f71c: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x13f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x13f720: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x13f720u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f724: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x13f724u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x13f728: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x13f728u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x13f72c: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x13f72cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f730: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x13f730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x13f734: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x13f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x13f738: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x13f738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x13f73c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x13f73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f740: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x13f740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x13f744: 0xc050054  jal         func_140150
    ctx->pc = 0x13F744u;
    SET_GPR_U32(ctx, 31, 0x13F74Cu);
    ctx->pc = 0x13F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F744u;
    // 0x13f748: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140150u, 0x13F744u, 0x13F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F74Cu;
label_13f74c:
    // 0x13f74c: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x13f74cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x13f750: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13f750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13f754: 0xc050054  jal         func_140150
    ctx->pc = 0x13F754u;
    SET_GPR_U32(ctx, 31, 0x13F75Cu);
    ctx->pc = 0x13F758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F754u;
    // 0x13f758: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140150u, 0x13F754u, 0x13F75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F75Cu;
label_13f75c:
    // 0x13f75c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x13f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13f760: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x13f760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13f764: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x13f764u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f768: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x13f768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13f76c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13f76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13f770: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x13f770u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13f774: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x13f774u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x13f778: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x13f778u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x13f77c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13f77cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f780: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x13f780u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13f784: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x13f784u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x13f788: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13F788u;
    {
        const bool branch_taken_0x13f788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F788u;
        // 0x13f78c: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f788) {
            ctx->pc = 0x13F7ACu;
            return;
        }
    }
    ctx->pc = 0x13F790u;
}
