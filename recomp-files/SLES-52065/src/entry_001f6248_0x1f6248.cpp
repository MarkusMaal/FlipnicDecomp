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

// Function: entry_001f6248
// Address: 0x1f6248 - 0x1f6268
void entry_001f6248_0x1f6248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6248_0x1f6248");
#endif

    ctx->pc = 0x1f6248u;

    // 0x1f6248: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F6248u;
    {
        const bool branch_taken_0x1f6248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6248u;
        // 0x1f624c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6248) {
            ctx->pc = 0x1F6290u;
            return;
        }
    }
    ctx->pc = 0x1F6250u;
    // 0x1f6250: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6250u;
    {
        const bool branch_taken_0x1f6250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6250u;
        // 0x1f6254: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6250) {
            ctx->pc = 0x1F6268u;
            return;
        }
    }
    ctx->pc = 0x1F6258u;
    // 0x1f6258: 0x12050009  beq         $s0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6258u;
    {
        const bool branch_taken_0x1f6258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6258u;
        // 0x1f625c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6258) {
            ctx->pc = 0x1F6280u;
            return;
        }
    }
    ctx->pc = 0x1F6260u;
    // 0x1f6260: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1F6260u;
    {
        const bool branch_taken_0x1f6260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6260u;
        // 0x1f6264: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6260) {
            ctx->pc = 0x1F62C8u;
            return;
        }
    }
    ctx->pc = 0x1F6268u;
}
