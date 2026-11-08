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

// Function: entry_001e8434
// Address: 0x1e8434 - 0x1e8460
void entry_001e8434_0x1e8434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8434_0x1e8434");
#endif

    ctx->pc = 0x1e8434u;

    // 0x1e8434: 0xafc00178  sw          $zero, 0x178($fp)
    ctx->pc = 0x1e8434u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 376), GPR_U32(ctx, 0));
    // 0x1e8438: 0x27d5017c  addiu       $s5, $fp, 0x17C
    ctx->pc = 0x1e8438u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 380));
    // 0x1e843c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1e843cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1e8440: 0x27d60180  addiu       $s6, $fp, 0x180
    ctx->pc = 0x1e8440u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 384));
    // 0x1e8444: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1e8444u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1e8448: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1e8448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e844c: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x1e844cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e8450: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8450u;
    {
        const bool branch_taken_0x1e8450 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8450u;
        // 0x1e8454: 0x511821  addu        $v1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8450) {
            ctx->pc = 0x1E8460u;
            return;
        }
    }
    ctx->pc = 0x1E8458u;
    // 0x1e8458: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8458u;
    {
        const bool branch_taken_0x1e8458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8458u;
        // 0x1e845c: 0x283082b  sltu        $at, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8458) {
            ctx->pc = 0x1E8468u;
            return;
        }
    }
    ctx->pc = 0x1E8460u;
}
