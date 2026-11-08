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

// Function: entry_00204268
// Address: 0x204268 - 0x2042a4
void entry_00204268_0x204268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204268_0x204268");
#endif

    ctx->pc = 0x204268u;

label_204268:
    // 0x204268: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x204268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x20426c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x20426cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x204270: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x204270u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x204274: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x204274u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x204278: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20427c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x20427cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x204280: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x204280u;
    {
        const bool branch_taken_0x204280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x204280) {
            ctx->pc = 0x204268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204268;
        }
    }
    ctx->pc = 0x204288u;
    // 0x204288: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x204288u;
    {
        const bool branch_taken_0x204288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204288u;
        // 0x20428c: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204288) {
            ctx->pc = 0x204358u;
            return;
        }
    }
    ctx->pc = 0x204290u;
    // 0x204290: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x204290u;
    {
        const bool branch_taken_0x204290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x204294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204290u;
        // 0x204294: 0x2662fea4  addiu       $v0, $s3, -0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204290) {
            ctx->pc = 0x20435Cu;
            return;
        }
    }
    ctx->pc = 0x204298u;
    // 0x204298: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x204298u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x20429c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x20429Cu;
    {
        const bool branch_taken_0x20429c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2042A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20429Cu;
        // 0x2042a0: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20429c) {
            ctx->pc = 0x204358u;
            return;
        }
    }
    ctx->pc = 0x2042A4u;
}
