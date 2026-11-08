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

// Function: entry_001d1edc
// Address: 0x1d1edc - 0x1d1f2c
void entry_001d1edc_0x1d1edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1edc_0x1d1edc");
#endif

    switch (ctx->pc) {
        case 0x1d1ee4u: goto label_1d1ee4;
        case 0x1d1f0cu: goto label_1d1f0c;
        case 0x1d1f1cu: goto label_1d1f1c;
        default: break;
    }

    ctx->pc = 0x1d1edcu;

    // 0x1d1edc: 0xc0749d0  jal         func_1D2740
    ctx->pc = 0x1D1EDCu;
    SET_GPR_U32(ctx, 31, 0x1D1EE4u);
    ctx->pc = 0x1D1EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1EDCu;
    // 0x1d1ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2740u, 0x1D1EDCu, 0x1D1EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1EE4u;
label_1d1ee4:
    // 0x1d1ee4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D1EE4u;
    {
        const bool branch_taken_0x1d1ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1EE4u;
        // 0x1d1ee8: 0x3c060037  lui         $a2, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ee4) {
            ctx->pc = 0x1D1F54u;
            return;
        }
    }
    ctx->pc = 0x1D1EECu;
    // 0x1d1eec: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1d1eecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1d1ef0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d1ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ef8: 0x24c6fe00  addiu       $a2, $a2, -0x200
    ctx->pc = 0x1d1ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966784));
    // 0x1d1efc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f00: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d1f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1f04: 0xc07e39c  jal         func_1F8E70
    ctx->pc = 0x1D1F04u;
    SET_GPR_U32(ctx, 31, 0x1D1F0Cu);
    ctx->pc = 0x1D1F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F04u;
    // 0x1d1f08: 0x2529fdc0  addiu       $t1, $t1, -0x240 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8E70u, 0x1D1F04u, 0x1D1F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F0Cu;
label_1d1f0c:
    // 0x1d1f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f14: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D1F14u;
    SET_GPR_U32(ctx, 31, 0x1D1F1Cu);
    ctx->pc = 0x1D1F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F14u;
    // 0x1d1f18: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D1F14u, 0x1D1F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F1Cu;
label_1d1f1c:
    // 0x1d1f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1f20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1f24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D1F24u;
    {
        const bool branch_taken_0x1d1f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F24u;
        // 0x1d1f28: 0xac23fe40  sw          $v1, -0x1C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966848), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f24) {
            ctx->pc = 0x1D1F54u;
            return;
        }
    }
    ctx->pc = 0x1D1F2Cu;
}
