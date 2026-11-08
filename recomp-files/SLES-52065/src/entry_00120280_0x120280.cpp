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

// Function: entry_00120280
// Address: 0x120280 - 0x1202a8
void entry_00120280_0x120280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120280_0x120280");
#endif

    ctx->pc = 0x120280u;

    // 0x120280: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x120280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x120284: 0x15040013  bne         $t0, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x120284u;
    {
        const bool branch_taken_0x120284 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        ctx->pc = 0x120288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120284u;
        // 0x120288: 0x2cc10041  sltiu       $at, $a2, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120284) {
            ctx->pc = 0x1202D4u;
            return;
        }
    }
    ctx->pc = 0x12028Cu;
    // 0x12028c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x12028Cu;
    {
        const bool branch_taken_0x12028c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12028c) {
            ctx->pc = 0x1202A8u;
            return;
        }
    }
    ctx->pc = 0x120294u;
    // 0x120294: 0x92850036  lbu         $a1, 0x36($s4)
    ctx->pc = 0x120294u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 54)));
    // 0x120298: 0x64040002  daddiu      $a0, $zero, 0x2
    ctx->pc = 0x120298u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x12029c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x12029cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1202a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1202a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1202a4: 0xa2830036  sb          $v1, 0x36($s4)
    ctx->pc = 0x1202a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 54), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1202a8u;
}
