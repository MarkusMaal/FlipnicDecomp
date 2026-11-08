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

// Function: entry_001477c0
// Address: 0x1477c0 - 0x147830
void entry_001477c0_0x1477c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001477c0_0x1477c0");
#endif

    ctx->pc = 0x1477c0u;

label_1477c0:
    // 0x1477c0: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x1477c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1477c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1477c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1477c8: 0x2e631388  sltiu       $v1, $s3, 0x1388
    ctx->pc = 0x1477c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5000) ? 1 : 0);
    // 0x1477cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1477ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1477d0: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1477d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1477d4: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x1477d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1477d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1477d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1477dc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1477dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1477e0: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x1477e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1477e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1477e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1477e8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1477e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1477ec: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x1477ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1477f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1477f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1477f4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1477f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1477f8: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x1477f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1477fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1477fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x147800: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x147800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x147804: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x147804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x147808: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x147808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14780c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x14780cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x147810: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x147810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147814: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x147814u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x147818: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x147818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x14781c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x14781cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x147820: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x147820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x147824: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x147824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x147828: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x147828u;
    {
        const bool branch_taken_0x147828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147828u;
        // 0x14782c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147828) {
            ctx->pc = 0x1477C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1477c0;
        }
    }
    ctx->pc = 0x147830u;
}
