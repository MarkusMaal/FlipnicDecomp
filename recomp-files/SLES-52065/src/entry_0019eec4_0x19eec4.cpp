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

// Function: entry_0019eec4
// Address: 0x19eec4 - 0x19ef18
void entry_0019eec4_0x19eec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eec4_0x19eec4");
#endif

    ctx->pc = 0x19eec4u;

    // 0x19eec4: 0x0  nop
    ctx->pc = 0x19eec4u;
    // NOP
    // 0x19eec8: 0x10880013  beq         $a0, $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19EEC8u;
    {
        const bool branch_taken_0x19eec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x19eec8) {
            ctx->pc = 0x19EF18u;
            return;
        }
    }
    ctx->pc = 0x19EED0u;
    // 0x19eed0: 0x90e2282b  lbu         $v0, 0x282B($a3)
    ctx->pc = 0x19eed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10283)));
    // 0x19eed4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19EED4u;
    {
        const bool branch_taken_0x19eed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19eed4) {
            ctx->pc = 0x19EF18u;
            return;
        }
    }
    ctx->pc = 0x19EEDCu;
    // 0x19eedc: 0x90e2282c  lbu         $v0, 0x282C($a3)
    ctx->pc = 0x19eedcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10284)));
    // 0x19eee0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19EEE0u;
    {
        const bool branch_taken_0x19eee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19eee0) {
            ctx->pc = 0x19EF18u;
            return;
        }
    }
    ctx->pc = 0x19EEE8u;
    // 0x19eee8: 0x90e2282a  lbu         $v0, 0x282A($a3)
    ctx->pc = 0x19eee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10282)));
    // 0x19eeec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19EEECu;
    {
        const bool branch_taken_0x19eeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19eeec) {
            ctx->pc = 0x19EF18u;
            return;
        }
    }
    ctx->pc = 0x19EEF4u;
    // 0x19eef4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x19eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19eef8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19eefc: 0x90631684  lbu         $v1, 0x1684($v1)
    ctx->pc = 0x19eefcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5764)));
    // 0x19ef00: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19EF00u;
    {
        const bool branch_taken_0x19ef00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19ef00) {
            ctx->pc = 0x19EF18u;
            return;
        }
    }
    ctx->pc = 0x19EF08u;
    // 0x19ef08: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x19ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x19ef0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ef10: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x19ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19ef14: 0xa04302f0  sb          $v1, 0x2F0($v0)
    ctx->pc = 0x19ef14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 752), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x19ef18u;
}
