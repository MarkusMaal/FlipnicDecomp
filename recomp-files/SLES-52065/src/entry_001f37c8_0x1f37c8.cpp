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

// Function: entry_001f37c8
// Address: 0x1f37c8 - 0x1f380c
void entry_001f37c8_0x1f37c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f37c8_0x1f37c8");
#endif

    switch (ctx->pc) {
        case 0x1f37f4u: goto label_1f37f4;
        default: break;
    }

    ctx->pc = 0x1f37c8u;

    // 0x1f37c8: 0x24e7fb80  addiu       $a3, $a3, -0x480
    ctx->pc = 0x1f37c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966144));
    // 0x1f37cc: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f37ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f37d0: 0x2484fd80  addiu       $a0, $a0, -0x280
    ctx->pc = 0x1f37d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
    // 0x1f37d4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f37d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f37d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f37d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f37dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f37dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37e0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1f37e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f37e4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f37e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37e8: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1f37e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f37ec: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F37ECu;
    SET_GPR_U32(ctx, 31, 0x1F37F4u);
    ctx->pc = 0x1F37F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37ECu;
    // 0x1f37f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F37ECu, 0x1F37F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37F4u;
label_1f37f4:
    // 0x1f37f4: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x1f37f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x1f37f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f37f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f37fc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1f37fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f3800: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1f3800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1f3804: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f3804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3808: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1f3808u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    ctx->pc = 0x1f380cu;
}
