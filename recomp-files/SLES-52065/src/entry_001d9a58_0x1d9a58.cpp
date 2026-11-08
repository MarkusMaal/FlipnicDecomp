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

// Function: entry_001d9a58
// Address: 0x1d9a58 - 0x1d9a80
void entry_001d9a58_0x1d9a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9a58_0x1d9a58");
#endif

    ctx->pc = 0x1d9a58u;

    // 0x1d9a58: 0x641fff7  bgez        $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D9A58u;
    {
        const bool branch_taken_0x1d9a58 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1D9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A58u;
        // 0x1d9a5c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a58) {
            ctx->pc = 0x1D9A38u;
            return;
        }
    }
    ctx->pc = 0x1D9A60u;
    // 0x1d9a60: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1d9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1d9a64: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x1d9a64u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
    // 0x1d9a68: 0x245066c0  addiu       $s0, $v0, 0x66C0
    ctx->pc = 0x1d9a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 26304));
    // 0x1d9a6c: 0xaec072e0  sw          $zero, 0x72E0($s6)
    ctx->pc = 0x1d9a6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3872E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3872E0u, _value); } while (0);
    // 0x1d9a70: 0x26150010  addiu       $s5, $s0, 0x10
    ctx->pc = 0x1d9a70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d9a74: 0x3c1e0038  lui         $fp, 0x38
    ctx->pc = 0x1d9a74u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
    // 0x1d9a78: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x1d9a78u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
    // 0x1d9a7c: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x1d9a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->pc = 0x1d9a80u;
}
