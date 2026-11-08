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

// Function: entry_00197254
// Address: 0x197254 - 0x197278
void entry_00197254_0x197254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197254_0x197254");
#endif

    ctx->pc = 0x197254u;

    // 0x197254: 0x0  nop
    ctx->pc = 0x197254u;
    // NOP
    // 0x197258: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x197258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19725c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x19725cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197260: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x197260u;
    {
        const bool branch_taken_0x197260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197260u;
        // 0x197264: 0x2b01821  addu        $v1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197260) {
            ctx->pc = 0x1971F0u;
            return;
        }
    }
    ctx->pc = 0x197268u;
    // 0x197268: 0xaea0068c  sw          $zero, 0x68C($s5)
    ctx->pc = 0x197268u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1676), GPR_U32(ctx, 0));
    // 0x19726c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x19726Cu;
    {
        const bool branch_taken_0x19726c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19726Cu;
        // 0x197270: 0xaea00680  sw          $zero, 0x680($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19726c) {
            ctx->pc = 0x197300u;
            return;
        }
    }
    ctx->pc = 0x197274u;
    // 0x197274: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x197274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197278u;
}
