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

// Function: entry_001adaf8
// Address: 0x1adaf8 - 0x1adb28
void entry_001adaf8_0x1adaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adaf8_0x1adaf8");
#endif

    ctx->pc = 0x1adaf8u;

    // 0x1adaf8: 0x922306c1  lbu         $v1, 0x6C1($s1)
    ctx->pc = 0x1adaf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1729)));
    // 0x1adafc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1ADAFCu;
    {
        const bool branch_taken_0x1adafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adafc) {
            ctx->pc = 0x1ADB44u;
            return;
        }
    }
    ctx->pc = 0x1ADB04u;
    // 0x1adb04: 0x8e2307f0  lw          $v1, 0x7F0($s1)
    ctx->pc = 0x1adb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2032)));
    // 0x1adb08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1adb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adb0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1adb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1adb10: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1adb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1adb14: 0x9063282c  lbu         $v1, 0x282C($v1)
    ctx->pc = 0x1adb14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10284)));
    // 0x1adb18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADB18u;
    {
        const bool branch_taken_0x1adb18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB18u;
        // 0x1adb1c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb18) {
            ctx->pc = 0x1ADB28u;
            return;
        }
    }
    ctx->pc = 0x1ADB20u;
    // 0x1adb20: 0x8e2406c4  lw          $a0, 0x6C4($s1)
    ctx->pc = 0x1adb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1732)));
    // 0x1adb24: 0x0  nop
    ctx->pc = 0x1adb24u;
    // NOP
    ctx->pc = 0x1adb28u;
}
