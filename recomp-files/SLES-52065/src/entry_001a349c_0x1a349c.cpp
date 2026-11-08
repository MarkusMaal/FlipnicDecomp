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

// Function: entry_001a349c
// Address: 0x1a349c - 0x1a34dc
void entry_001a349c_0x1a349c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a349c_0x1a349c");
#endif

    ctx->pc = 0x1a349cu;

label_1a349c:
    // 0x1a349c: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x1a349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1a34a0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1a34a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a34a4: 0xac400798  sw          $zero, 0x798($v0)
    ctx->pc = 0x1a34a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1944), GPR_U32(ctx, 0));
    // 0x1a34a8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1a34a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1a34ac: 0xac40079c  sw          $zero, 0x79C($v0)
    ctx->pc = 0x1a34acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1948), GPR_U32(ctx, 0));
    // 0x1a34b0: 0xac4007a0  sw          $zero, 0x7A0($v0)
    ctx->pc = 0x1a34b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1952), GPR_U32(ctx, 0));
    // 0x1a34b4: 0xac4007a4  sw          $zero, 0x7A4($v0)
    ctx->pc = 0x1a34b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1956), GPR_U32(ctx, 0));
    // 0x1a34b8: 0xac4007a8  sw          $zero, 0x7A8($v0)
    ctx->pc = 0x1a34b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1960), GPR_U32(ctx, 0));
    // 0x1a34bc: 0xac4007ac  sw          $zero, 0x7AC($v0)
    ctx->pc = 0x1a34bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1964), GPR_U32(ctx, 0));
    // 0x1a34c0: 0xac4007b0  sw          $zero, 0x7B0($v0)
    ctx->pc = 0x1a34c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1968), GPR_U32(ctx, 0));
    // 0x1a34c4: 0x1880fff5  blez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A34C4u;
    {
        const bool branch_taken_0x1a34c4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A34C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34C4u;
        // 0x1a34c8: 0xac4007b4  sw          $zero, 0x7B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34c4) {
            ctx->pc = 0x1A349Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a349c;
        }
    }
    ctx->pc = 0x1A34CCu;
    // 0x1a34cc: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x1a34ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a34d0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A34D0u;
    {
        const bool branch_taken_0x1a34d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a34d0) {
            ctx->pc = 0x1A34F8u;
            return;
        }
    }
    ctx->pc = 0x1A34D8u;
    // 0x1a34d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a34d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->pc = 0x1a34dcu;
}
