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

// Function: entry_0012115c
// Address: 0x12115c - 0x1211a0
void entry_0012115c_0x12115c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012115c_0x12115c");
#endif

    ctx->pc = 0x12115cu;

    // 0x12115c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x12115cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x121160: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x121160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121164: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x121164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x121168: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x121168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x12116c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12116cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x121170: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121170u;
    {
        const bool branch_taken_0x121170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121170) {
            ctx->pc = 0x1211A0u;
            return;
        }
    }
    ctx->pc = 0x121178u;
    // 0x121178: 0x94620038  lhu         $v0, 0x38($v1)
    ctx->pc = 0x121178u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x12117c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x12117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x121180: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x121180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x121184: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121184u;
    {
        const bool branch_taken_0x121184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121184) {
            ctx->pc = 0x1211A0u;
            return;
        }
    }
    ctx->pc = 0x12118Cu;
    // 0x12118c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x12118cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x121190: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x121190u;
    {
        const bool branch_taken_0x121190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121190) {
            ctx->pc = 0x1211A0u;
            return;
        }
    }
    ctx->pc = 0x121198u;
    // 0x121198: 0xc048208  jal         func_120820
    ctx->pc = 0x121198u;
    SET_GPR_U32(ctx, 31, 0x1211A0u);
    ctx->pc = 0x120820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120820u, 0x121198u, 0x1211A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1211A0u;
}
