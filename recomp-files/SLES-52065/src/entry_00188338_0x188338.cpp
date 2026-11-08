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

// Function: entry_00188338
// Address: 0x188338 - 0x188380
void entry_00188338_0x188338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188338_0x188338");
#endif

    ctx->pc = 0x188338u;

    // 0x188338: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x188338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x18833c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18833Cu;
    {
        const bool branch_taken_0x18833c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18833c) {
            ctx->pc = 0x188380u;
            return;
        }
    }
    ctx->pc = 0x188344u;
    // 0x188344: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x188344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x188348: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x188348u;
    {
        const bool branch_taken_0x188348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188348) {
            ctx->pc = 0x188380u;
            return;
        }
    }
    ctx->pc = 0x188350u;
    // 0x188350: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x188350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x188354: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x188354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x188358: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x188358u;
    {
        const bool branch_taken_0x188358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188358) {
            ctx->pc = 0x188380u;
            return;
        }
    }
    ctx->pc = 0x188360u;
    // 0x188360: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x188360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x188364: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188364u;
    {
        const bool branch_taken_0x188364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188364u;
        // 0x188368: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188364) {
            ctx->pc = 0x188380u;
            return;
        }
    }
    ctx->pc = 0x18836Cu;
    // 0x18836c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x18836cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x188370: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x188370u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x188374: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x188374u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x188378: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x188378u;
    {
        const bool branch_taken_0x188378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188378u;
        // 0x18837c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188378) {
            ctx->pc = 0x188394u;
            return;
        }
    }
    ctx->pc = 0x188380u;
}
