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

// Function: entry_0013541c
// Address: 0x13541c - 0x13543c
void entry_0013541c_0x13541c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013541c_0x13541c");
#endif

    ctx->pc = 0x13541cu;

    // 0x13541c: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x13541cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x135420: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x135420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x135424: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x135424u;
    {
        const bool branch_taken_0x135424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135424) {
            ctx->pc = 0x13543Cu;
            return;
        }
    }
    ctx->pc = 0x13542Cu;
    // 0x13542c: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x13542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x135430: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x135430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x135434: 0xc061ca4  jal         func_187290
    ctx->pc = 0x135434u;
    SET_GPR_U32(ctx, 31, 0x13543Cu);
    ctx->pc = 0x135438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135434u;
    // 0x135438: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187290u, 0x135434u, 0x13543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13543Cu;
}
