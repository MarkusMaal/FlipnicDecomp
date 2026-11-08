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

// Function: entry_00159e00
// Address: 0x159e00 - 0x159e48
void entry_00159e00_0x159e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159e00_0x159e00");
#endif

    switch (ctx->pc) {
        case 0x159e30u: goto label_159e30;
        default: break;
    }

    ctx->pc = 0x159e00u;

    // 0x159e00: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x159e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x159e04: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x159e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x159e08: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x159e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x159e0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e10: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x159e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159e14: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x159e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x159e18: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x159e18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159e1c: 0x9068000e  lbu         $t0, 0xE($v1)
    ctx->pc = 0x159e1cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x159e20: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x159e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x159e24: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x159e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x159e28: 0xc0425d4  jal         func_109750
    ctx->pc = 0x159E28u;
    SET_GPR_U32(ctx, 31, 0x159E30u);
    ctx->pc = 0x159E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E28u;
    // 0x159e2c: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x159E28u, 0x159E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E30u;
label_159e30:
    // 0x159e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e34: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x159e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159e38: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x159e38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x159e3c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x159e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x159e40: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x159E40u;
    SET_GPR_U32(ctx, 31, 0x159E48u);
    ctx->pc = 0x159E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E40u;
    // 0x159e44: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x159E40u, 0x159E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E48u;
}
