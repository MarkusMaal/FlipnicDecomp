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

// Function: entry_001457ac
// Address: 0x1457ac - 0x14585c
void entry_001457ac_0x1457ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001457ac_0x1457ac");
#endif

    switch (ctx->pc) {
        case 0x1457d8u: goto label_1457d8;
        case 0x145818u: goto label_145818;
        case 0x145828u: goto label_145828;
        default: break;
    }

    ctx->pc = 0x1457acu;

    // 0x1457ac: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1457acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1457b0: 0x27a500ec  addiu       $a1, $sp, 0xEC
    ctx->pc = 0x1457b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x1457b4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1457b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1457b8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1457b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1457bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1457bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1457c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1457c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1457c4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1457c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1457c8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1457c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1457cc: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x1457ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x1457d0: 0xc04fe3c  jal         func_13F8F0
    ctx->pc = 0x1457D0u;
    SET_GPR_U32(ctx, 31, 0x1457D8u);
    ctx->pc = 0x1457D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1457D0u;
    // 0x1457d4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8F0u, 0x1457D0u, 0x1457D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457D8u;
label_1457d8:
    // 0x1457d8: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x1457d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1457dc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1457dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1457e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1457e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1457e4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1457e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1457e8: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x1457e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1457ec: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1457ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1457f0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1457f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1457f4: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x1457f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x1457f8: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x1457f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1457fc: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1457fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x145800: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x145800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x145804: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x145804u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x145808: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x145808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14580c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x14580cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x145810: 0xc0516fc  jal         func_145BF0
    ctx->pc = 0x145810u;
    SET_GPR_U32(ctx, 31, 0x145818u);
    ctx->pc = 0x145814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145810u;
    // 0x145814: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BF0u, 0x145810u, 0x145818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145818u;
label_145818:
    // 0x145818: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x145818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14581c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x14581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145820: 0xc0516fc  jal         func_145BF0
    ctx->pc = 0x145820u;
    SET_GPR_U32(ctx, 31, 0x145828u);
    ctx->pc = 0x145824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145820u;
    // 0x145824: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BF0u, 0x145820u, 0x145828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145828u;
label_145828:
    // 0x145828: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x145828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14582c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x14582cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x145830: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x145830u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145834: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x145834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x145838: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x145838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14583c: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14583cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x145840: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x145840u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x145844: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x145844u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x145848: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x145848u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14584c: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x14584cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x145850: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x145850u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x145854: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x145854u;
    {
        const bool branch_taken_0x145854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145854u;
        // 0x145858: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145854) {
            ctx->pc = 0x1458CCu;
            return;
        }
    }
    ctx->pc = 0x14585Cu;
}
