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

// Function: entry_001f30dc
// Address: 0x1f30dc - 0x1f311c
void entry_001f30dc_0x1f30dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f30dc_0x1f30dc");
#endif

    switch (ctx->pc) {
        case 0x1f310cu: goto label_1f310c;
        default: break;
    }

    ctx->pc = 0x1f30dcu;

    // 0x1f30dc: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f30dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f30e0: 0x2607fb80  addiu       $a3, $s0, -0x480
    ctx->pc = 0x1f30e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966144));
    // 0x1f30e4: 0xae11fb80  sw          $s1, -0x480($s0)
    ctx->pc = 0x1f30e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966144), GPR_U32(ctx, 17));
    // 0x1f30e8: 0x2484fd80  addiu       $a0, $a0, -0x280
    ctx->pc = 0x1f30e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
    // 0x1f30ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f30ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f30f0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f30f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f30f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f30f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30f8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f30f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f30fc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f30fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3100: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f3100u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f3104: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F3104u;
    SET_GPR_U32(ctx, 31, 0x1F310Cu);
    ctx->pc = 0x1F3108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3104u;
    // 0x1f3108: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F3104u, 0x1F310Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F310Cu;
label_1f310c:
    // 0x1f310c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F310Cu;
    {
        const bool branch_taken_0x1f310c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f310c) {
            ctx->pc = 0x1F3110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F310Cu;
            // 0x1f3110: 0x8e02fb80  lw          $v0, -0x480($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F311Cu;
            return;
        }
    }
    ctx->pc = 0x1F3114u;
    // 0x1f3114: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f3114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f3118: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1f311cu;
}
