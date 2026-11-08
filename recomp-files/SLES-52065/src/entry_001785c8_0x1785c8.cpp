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

// Function: entry_001785c8
// Address: 0x1785c8 - 0x178614
void entry_001785c8_0x1785c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001785c8_0x1785c8");
#endif

    switch (ctx->pc) {
        case 0x1785d8u: goto label_1785d8;
        case 0x1785f0u: goto label_1785f0;
        case 0x178610u: goto label_178610;
        default: break;
    }

    ctx->pc = 0x1785c8u;

    // 0x1785c8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1785c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1785cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1785ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1785d0: 0xc05e22c  jal         func_1788B0
    ctx->pc = 0x1785D0u;
    SET_GPR_U32(ctx, 31, 0x1785D8u);
    ctx->pc = 0x1785D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1785D0u;
    // 0x1785d4: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788B0u, 0x1785D0u, 0x1785D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1785D8u;
label_1785d8:
    // 0x1785d8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1785d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1785dc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1785dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1785e0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1785e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1785e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1785e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1785e8: 0xc05e22c  jal         func_1788B0
    ctx->pc = 0x1785E8u;
    SET_GPR_U32(ctx, 31, 0x1785F0u);
    ctx->pc = 0x1785ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1785E8u;
    // 0x1785ec: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788B0u, 0x1785E8u, 0x1785F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1785F0u;
label_1785f0:
    // 0x1785f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1785f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785f4: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x1785f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1785f8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1785f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1785fc: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1785fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x178600: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x178600u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x178604: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x178604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x178608: 0xc05ccf8  jal         func_1733E0
    ctx->pc = 0x178608u;
    SET_GPR_U32(ctx, 31, 0x178610u);
    ctx->pc = 0x17860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178608u;
    // 0x17860c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1733E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733E0u, 0x178608u, 0x178610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178610u;
label_178610:
    // 0x178610: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x178610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x178614u;
}
