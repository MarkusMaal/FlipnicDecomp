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

// Function: entry_0010f03c
// Address: 0x10f03c - 0x10f068
void entry_0010f03c_0x10f03c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f03c_0x10f03c");
#endif

    ctx->pc = 0x10f03cu;

    // 0x10f03c: 0x92230230  lbu         $v1, 0x230($s1)
    ctx->pc = 0x10f03cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x10f040: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x10f040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x10f044: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x10F044u;
    {
        const bool branch_taken_0x10f044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f044) {
            ctx->pc = 0x10F10Cu;
            return;
        }
    }
    ctx->pc = 0x10F04Cu;
    // 0x10f04c: 0x92250231  lbu         $a1, 0x231($s1)
    ctx->pc = 0x10f04cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
    // 0x10f050: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x10f050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
    // 0x10f054: 0x64040006  daddiu      $a0, $zero, 0x6
    ctx->pc = 0x10f054u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x10f058: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x10f05c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10f060: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x10F060u;
    {
        const bool branch_taken_0x10f060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F060u;
        // 0x10f064: 0xa2230231  sb          $v1, 0x231($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f060) {
            ctx->pc = 0x10F10Cu;
            return;
        }
    }
    ctx->pc = 0x10F068u;
}
