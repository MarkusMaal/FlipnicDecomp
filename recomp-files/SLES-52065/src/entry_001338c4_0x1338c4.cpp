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

// Function: entry_001338c4
// Address: 0x1338c4 - 0x1338fc
void entry_001338c4_0x1338c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001338c4_0x1338c4");
#endif

    switch (ctx->pc) {
        case 0x1338d0u: goto label_1338d0;
        case 0x1338dcu: goto label_1338dc;
        default: break;
    }

    ctx->pc = 0x1338c4u;

    // 0x1338c4: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x1338c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x1338c8: 0xc04c554  jal         func_131550
    ctx->pc = 0x1338C8u;
    SET_GPR_U32(ctx, 31, 0x1338D0u);
    ctx->pc = 0x1338CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338C8u;
    // 0x1338cc: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x1338C8u, 0x1338D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338D0u;
label_1338d0:
    // 0x1338d0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1338d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1338d4: 0xc04c550  jal         func_131540
    ctx->pc = 0x1338D4u;
    SET_GPR_U32(ctx, 31, 0x1338DCu);
    ctx->pc = 0x1338D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338D4u;
    // 0x1338d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x1338D4u, 0x1338DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338DCu;
label_1338dc:
    // 0x1338dc: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x1338dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1338e0: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x1338e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1338e4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1338e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1338e8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1338e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1338ec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1338ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1338f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1338f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1338f4: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1338F4u;
    {
        const bool branch_taken_0x1338f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x1338f4) {
            ctx->pc = 0x133924u;
            return;
        }
    }
    ctx->pc = 0x1338FCu;
}
