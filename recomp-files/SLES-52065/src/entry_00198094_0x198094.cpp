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

// Function: entry_00198094
// Address: 0x198094 - 0x1980bc
void entry_00198094_0x198094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198094_0x198094");
#endif

    ctx->pc = 0x198094u;

    // 0x198094: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x198094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x198098: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x198098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19809c: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x19809Cu;
    {
        const bool branch_taken_0x19809c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19809c) {
            ctx->pc = 0x198140u;
            return;
        }
    }
    ctx->pc = 0x1980A4u;
    // 0x1980a4: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x1980a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1980a8: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1980a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1980ac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1980ACu;
    {
        const bool branch_taken_0x1980ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1980ac) {
            ctx->pc = 0x1980BCu;
            return;
        }
    }
    ctx->pc = 0x1980B4u;
    // 0x1980b4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1980B4u;
    {
        const bool branch_taken_0x1980b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1980b4) {
            ctx->pc = 0x198138u;
            return;
        }
    }
    ctx->pc = 0x1980BCu;
}
