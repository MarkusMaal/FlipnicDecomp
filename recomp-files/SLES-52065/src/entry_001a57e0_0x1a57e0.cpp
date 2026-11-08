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

// Function: entry_001a57e0
// Address: 0x1a57e0 - 0x1a5820
void entry_001a57e0_0x1a57e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a57e0_0x1a57e0");
#endif

    ctx->pc = 0x1a57e0u;

label_1a57e0:
    // 0x1a57e0: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x1a57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1a57e4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1a57e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a57e8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1a57e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1a57ec: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1a57ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1a57f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a57f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1a57f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a57f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1a57f8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1a57f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1a57fc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1a57fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1a5800: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1a5800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1a5804: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1a5804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1a5808: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1a5808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1a580c: 0x1880fff4  blez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A580Cu;
    {
        const bool branch_taken_0x1a580c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A5810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A580Cu;
        // 0x1a5810: 0xac60001c  sw          $zero, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a580c) {
            ctx->pc = 0x1A57E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a57e0;
        }
    }
    ctx->pc = 0x1A5814u;
    // 0x1a5814: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x1a5814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a5818: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5818u;
    {
        const bool branch_taken_0x1a5818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5818u;
        // 0x1a581c: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5818) {
            ctx->pc = 0x1A583Cu;
            return;
        }
    }
    ctx->pc = 0x1A5820u;
}
