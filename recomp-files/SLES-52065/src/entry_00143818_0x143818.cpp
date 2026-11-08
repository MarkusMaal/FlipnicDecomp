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

// Function: entry_00143818
// Address: 0x143818 - 0x14384c
void entry_00143818_0x143818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143818_0x143818");
#endif

    ctx->pc = 0x143818u;

label_143818:
    // 0x143818: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x143818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14381c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14381cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x143820: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x143820u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x143824: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x143824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x143828: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x143828u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x14382c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x14382cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x143830: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x143830u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x143834: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x143834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x143838: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x143838u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
    // 0x14383c: 0x1660fff6  bnez        $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x14383Cu;
    {
        const bool branch_taken_0x14383c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x143840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14383Cu;
        // 0x143840: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14383c) {
            ctx->pc = 0x143818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143818;
        }
    }
    ctx->pc = 0x143844u;
    // 0x143844: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x143844u;
    {
        const bool branch_taken_0x143844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143844u;
        // 0x143848: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143844) {
            ctx->pc = 0x143A54u;
            return;
        }
    }
    ctx->pc = 0x14384Cu;
}
