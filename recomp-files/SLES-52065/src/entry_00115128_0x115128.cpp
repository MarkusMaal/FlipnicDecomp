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

// Function: entry_00115128
// Address: 0x115128 - 0x115148
void entry_00115128_0x115128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115128_0x115128");
#endif

    ctx->pc = 0x115128u;

    // 0x115128: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x115128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x11512c: 0x24430088  addiu       $v1, $v0, 0x88
    ctx->pc = 0x11512cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x115130: 0x904200c9  lbu         $v0, 0xC9($v0)
    ctx->pc = 0x115130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 201)));
    // 0x115134: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115134u;
    {
        const bool branch_taken_0x115134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115134) {
            ctx->pc = 0x115148u;
            return;
        }
    }
    ctx->pc = 0x11513Cu;
    // 0x11513c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x11513cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x115140: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115144: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x115144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x115148u;
}
