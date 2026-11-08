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

// Function: entry_00133924
// Address: 0x133924 - 0x133948
void entry_00133924_0x133924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133924_0x133924");
#endif

    ctx->pc = 0x133924u;

    // 0x133924: 0x0  nop
    ctx->pc = 0x133924u;
    // NOP
    // 0x133928: 0x8f848528  lw          $a0, -0x7AD8($gp)
    ctx->pc = 0x133928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935848)));
    // 0x13392c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13392cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133930: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x133930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x133934: 0xaf848528  sw          $a0, -0x7AD8($gp)
    ctx->pc = 0x133934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935848), GPR_U32(ctx, 4));
    // 0x133938: 0x8f848528  lw          $a0, -0x7AD8($gp)
    ctx->pc = 0x133938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935848)));
    // 0x13393c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13393Cu;
    {
        const bool branch_taken_0x13393c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13393c) {
            ctx->pc = 0x133948u;
            return;
        }
    }
    ctx->pc = 0x133944u;
    // 0x133944: 0xaf808528  sw          $zero, -0x7AD8($gp)
    ctx->pc = 0x133944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935848), GPR_U32(ctx, 0));
    ctx->pc = 0x133948u;
}
