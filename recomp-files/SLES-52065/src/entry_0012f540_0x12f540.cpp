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

// Function: entry_0012f540
// Address: 0x12f540 - 0x12f560
void entry_0012f540_0x12f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f540_0x12f540");
#endif

    ctx->pc = 0x12f540u;

    // 0x12f540: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x12f540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12f544: 0x24661a20  addiu       $a2, $v1, 0x1A20
    ctx->pc = 0x12f544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6688));
    // 0x12f548: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x12f548u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f54c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x12f54cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f550: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F550u;
    {
        const bool branch_taken_0x12f550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F550u;
        // 0x12f554: 0x2402007c  addiu       $v0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f550) {
            ctx->pc = 0x12F560u;
            return;
        }
    }
    ctx->pc = 0x12F558u;
    // 0x12f558: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12F558u;
    {
        const bool branch_taken_0x12f558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f558) {
            ctx->pc = 0x12F584u;
            return;
        }
    }
    ctx->pc = 0x12F560u;
}
