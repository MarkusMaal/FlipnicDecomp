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

// Function: entry_00122e8c
// Address: 0x122e8c - 0x122ec0
void entry_00122e8c_0x122e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122e8c_0x122e8c");
#endif

    ctx->pc = 0x122e8cu;

    // 0x122e8c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x122e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x122e90: 0x93848050  lbu         $a0, -0x7FB0($gp)
    ctx->pc = 0x122e90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934608)));
    // 0x122e94: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x122e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x122e98: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x122e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x122e9c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x122ea0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x122ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x122ea4: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x122ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x122ea8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x122ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x122eac: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x122eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x122eb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x122EB0u;
    {
        const bool branch_taken_0x122eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x122eb0) {
            ctx->pc = 0x122EC0u;
            return;
        }
    }
    ctx->pc = 0x122EB8u;
    // 0x122eb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x122EB8u;
    {
        const bool branch_taken_0x122eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EB8u;
        // 0x122ebc: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122eb8) {
            ctx->pc = 0x122EC8u;
            return;
        }
    }
    ctx->pc = 0x122EC0u;
}
