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

// Function: entry_001353fc
// Address: 0x1353fc - 0x13541c
void entry_001353fc_0x1353fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001353fc_0x1353fc");
#endif

    ctx->pc = 0x1353fcu;

    // 0x1353fc: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x1353fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x135400: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x135400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x135404: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x135404u;
    {
        const bool branch_taken_0x135404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135404) {
            ctx->pc = 0x13541Cu;
            return;
        }
    }
    ctx->pc = 0x13540Cu;
    // 0x13540c: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x13540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x135410: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x135410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x135414: 0xc061c2c  jal         func_1870B0
    ctx->pc = 0x135414u;
    SET_GPR_U32(ctx, 31, 0x13541Cu);
    ctx->pc = 0x135418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135414u;
    // 0x135418: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1870B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1870B0u, 0x135414u, 0x13541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13541Cu;
}
