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

// Function: entry_0018b720
// Address: 0x18b720 - 0x18b75c
void entry_0018b720_0x18b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b720_0x18b720");
#endif

    ctx->pc = 0x18b720u;

    // 0x18b720: 0xae352718  sw          $s5, 0x2718($s1)
    ctx->pc = 0x18b720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10008), GPR_U32(ctx, 21));
    // 0x18b724: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x18b724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x18b728: 0xae23271c  sw          $v1, 0x271C($s1)
    ctx->pc = 0x18b728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10012), GPR_U32(ctx, 3));
    // 0x18b72c: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x18b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x18b730: 0xae202720  sw          $zero, 0x2720($s1)
    ctx->pc = 0x18b730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 0));
    // 0x18b734: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18b734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18b738: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x18b738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b73c: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x18b73cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x18b740: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18b740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b744: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b748: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x18b748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18b74c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b750: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x18B750u;
    {
        const bool branch_taken_0x18b750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B750u;
        // 0x18b754: 0xae222724  sw          $v0, 0x2724($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10020), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b750) {
            ctx->pc = 0x18B77Cu;
            return;
        }
    }
    ctx->pc = 0x18B758u;
    // 0x18b758: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x18b758u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18b75cu;
}
