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

// Function: entry_00162250
// Address: 0x162250 - 0x16227c
void entry_00162250_0x162250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162250_0x162250");
#endif

    ctx->pc = 0x162250u;

    // 0x162250: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x162250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x162254: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x162254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x162258: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x162258u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16225c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16225cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162260: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x162260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x162264: 0x0  nop
    ctx->pc = 0x162264u;
    // NOP
    // 0x162268: 0x0  nop
    ctx->pc = 0x162268u;
    // NOP
    // 0x16226c: 0x1010  mfhi        $v0
    ctx->pc = 0x16226cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x162270: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x162270u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x162274: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x162274u;
    {
        const bool branch_taken_0x162274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162274u;
        // 0x162278: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162274) {
            ctx->pc = 0x16231Cu;
            return;
        }
    }
    ctx->pc = 0x16227Cu;
}
