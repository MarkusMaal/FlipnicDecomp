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

// Function: entry_001f80c0
// Address: 0x1f80c0 - 0x1f80ec
void entry_001f80c0_0x1f80c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f80c0_0x1f80c0");
#endif

    ctx->pc = 0x1f80c0u;

    // 0x1f80c0: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x1f80c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x1f80c4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1f80c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1f80c8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1f80c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f80cc: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1f80ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f80d0: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x1f80d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f80d4: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x1f80d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f80d8: 0x8e63bb10  lw          $v1, -0x44F0($s3)
    ctx->pc = 0x1f80d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949648)));
    // 0x1f80dc: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F80DCu;
    {
        const bool branch_taken_0x1f80dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80DCu;
        // 0x1f80e0: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80dc) {
            ctx->pc = 0x1F80ECu;
            return;
        }
    }
    ctx->pc = 0x1F80E4u;
    // 0x1f80e4: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F80E4u;
    SET_GPR_U32(ctx, 31, 0x1F80ECu);
    ctx->pc = 0x1F80E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F80E4u;
    // 0x1f80e8: 0x24844838  addiu       $a0, $a0, 0x4838 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F80E4u, 0x1F80ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F80ECu;
}
