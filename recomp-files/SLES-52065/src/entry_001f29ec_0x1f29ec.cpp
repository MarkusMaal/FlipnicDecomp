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

// Function: entry_001f29ec
// Address: 0x1f29ec - 0x1f2a34
void entry_001f29ec_0x1f29ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f29ec_0x1f29ec");
#endif

    switch (ctx->pc) {
        case 0x1f2a24u: goto label_1f2a24;
        default: break;
    }

    ctx->pc = 0x1f29ecu;

    // 0x1f29ec: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1f29ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x1f29f0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f29f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f29f4: 0xace5fa40  sw          $a1, -0x5C0($a3)
    ctx->pc = 0x1f29f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x38FA40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38FA40u, _value); } while (0);
    // 0x1f29f8: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f29f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f29fc: 0x2484f9c0  addiu       $a0, $a0, -0x640
    ctx->pc = 0x1f29fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965696));
    // 0x1f2a00: 0x24e7fa40  addiu       $a3, $a3, -0x5C0
    ctx->pc = 0x1f2a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965824));
    // 0x1f2a04: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f2a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f2a08: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f2a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f2a0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a10: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f2a10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2a14: 0x2609fa00  addiu       $t1, $s0, -0x600
    ctx->pc = 0x1f2a14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965760));
    // 0x1f2a18: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2a18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2a1c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F2A1Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A24u);
    ctx->pc = 0x1F2A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2A1Cu;
    // 0x1f2a20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F2A1Cu, 0x1F2A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A24u;
label_1f2a24:
    // 0x1f2a24: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2A24u;
    {
        const bool branch_taken_0x1f2a24 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f2a24) {
            ctx->pc = 0x1F2A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2A24u;
            // 0x1f2a28: 0x8e02fa00  lw          $v0, -0x600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2A34u;
            return;
        }
    }
    ctx->pc = 0x1F2A2Cu;
    // 0x1f2a2c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f2a30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f2a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1f2a34u;
}
