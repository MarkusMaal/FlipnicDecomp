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

// Function: entry_00196fe4
// Address: 0x196fe4 - 0x197030
void entry_00196fe4_0x196fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196fe4_0x196fe4");
#endif

    ctx->pc = 0x196fe4u;

    // 0x196fe4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x196fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x196fe8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x196fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x196fec: 0x14620056  bne         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x196FECu;
    {
        const bool branch_taken_0x196fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x196fec) {
            ctx->pc = 0x197148u;
            return;
        }
    }
    ctx->pc = 0x196FF4u;
    // 0x196ff4: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x196ff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x196ff8: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x196ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x196ffc: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x196FFCu;
    {
        const bool branch_taken_0x196ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x196ffc) {
            ctx->pc = 0x197138u;
            return;
        }
    }
    ctx->pc = 0x197004u;
    // 0x197004: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x197004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x197008: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x197008u;
    {
        const bool branch_taken_0x197008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x197008) {
            ctx->pc = 0x1970B0u;
            return;
        }
    }
    ctx->pc = 0x197010u;
    // 0x197010: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x197010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x197014: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x197014u;
    {
        const bool branch_taken_0x197014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x197014) {
            ctx->pc = 0x197070u;
            return;
        }
    }
    ctx->pc = 0x19701Cu;
    // 0x19701c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x19701cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x197020: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197020u;
    {
        const bool branch_taken_0x197020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x197020) {
            ctx->pc = 0x197030u;
            return;
        }
    }
    ctx->pc = 0x197028u;
    // 0x197028: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x197028u;
    {
        const bool branch_taken_0x197028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197028) {
            ctx->pc = 0x19713Cu;
            return;
        }
    }
    ctx->pc = 0x197030u;
}
