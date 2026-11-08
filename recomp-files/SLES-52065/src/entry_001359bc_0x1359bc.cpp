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

// Function: entry_001359bc
// Address: 0x1359bc - 0x1359dc
void entry_001359bc_0x1359bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001359bc_0x1359bc");
#endif

    ctx->pc = 0x1359bcu;

    // 0x1359bc: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x1359bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x1359c0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1359c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1359c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1359C4u;
    {
        const bool branch_taken_0x1359c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1359c4) {
            ctx->pc = 0x1359DCu;
            return;
        }
    }
    ctx->pc = 0x1359CCu;
    // 0x1359cc: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1359ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1359d0: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x1359d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1359d4: 0xc061c2c  jal         func_1870B0
    ctx->pc = 0x1359D4u;
    SET_GPR_U32(ctx, 31, 0x1359DCu);
    ctx->pc = 0x1359D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359D4u;
    // 0x1359d8: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1870B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1870B0u, 0x1359D4u, 0x1359DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359DCu;
}
