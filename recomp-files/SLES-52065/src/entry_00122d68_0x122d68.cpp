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

// Function: entry_00122d68
// Address: 0x122d68 - 0x122d84
void entry_00122d68_0x122d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122d68_0x122d68");
#endif

    ctx->pc = 0x122d68u;

    // 0x122d68: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x122d68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x122d6c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x122d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x122d70: 0xb3082b  sltu        $at, $a1, $s3
    ctx->pc = 0x122d70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x122d74: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x122D74u;
    {
        const bool branch_taken_0x122d74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D74u;
        // 0x122d78: 0xb3082b  sltu        $at, $a1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d74) {
            ctx->pc = 0x122E8Cu;
            return;
        }
    }
    ctx->pc = 0x122D7Cu;
    // 0x122d7c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x122D7Cu;
    {
        const bool branch_taken_0x122d7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x122d7c) {
            ctx->pc = 0x122DA0u;
            return;
        }
    }
    ctx->pc = 0x122D84u;
}
