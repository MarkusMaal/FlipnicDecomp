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

// Function: caseD_0
// Address: 0x191ca8 - 0x191d10
void caseD_0_0x191ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x191ca8");
#endif

    ctx->pc = 0x191ca8u;

    // 0x191ca8: 0x8c430450  lw          $v1, 0x450($v0)
    ctx->pc = 0x191ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x191cac: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x191cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x191cb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x191cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x191cb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x191cb8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x191cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x191cbc: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x191cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x191cc0: 0x10600198  beqz        $v1, . + 4 + (0x198 << 2)
    ctx->pc = 0x191CC0u;
    {
        const bool branch_taken_0x191cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191cc0) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191CC8u;
    // 0x191cc8: 0x8c430510  lw          $v1, 0x510($v0)
    ctx->pc = 0x191cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1296)));
    // 0x191ccc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x191cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x191cd0: 0xac430510  sw          $v1, 0x510($v0)
    ctx->pc = 0x191cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1296), GPR_U32(ctx, 3));
    // 0x191cd4: 0x8c480490  lw          $t0, 0x490($v0)
    ctx->pc = 0x191cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
    // 0x191cd8: 0x8c440510  lw          $a0, 0x510($v0)
    ctx->pc = 0x191cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1296)));
    // 0x191cdc: 0x8d030030  lw          $v1, 0x30($t0)
    ctx->pc = 0x191cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x191ce0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x191ce0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x191ce4: 0x1460018f  bnez        $v1, . + 4 + (0x18F << 2)
    ctx->pc = 0x191CE4u;
    {
        const bool branch_taken_0x191ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x191ce4) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191CECu;
    // 0x191cec: 0x8d060034  lw          $a2, 0x34($t0)
    ctx->pc = 0x191cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x191cf0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x191CF0u;
    {
        const bool branch_taken_0x191cf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x191cf0) {
            ctx->pc = 0x191D10u;
            return;
        }
    }
    ctx->pc = 0x191CF8u;
    // 0x191cf8: 0x8d070038  lw          $a3, 0x38($t0)
    ctx->pc = 0x191cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x191cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d00: 0x8c450450  lw          $a1, 0x450($v0)
    ctx->pc = 0x191d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x191d04: 0x8d08003c  lw          $t0, 0x3C($t0)
    ctx->pc = 0x191d04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x191d08: 0xc064d84  jal         func_193610
    ctx->pc = 0x191D08u;
    SET_GPR_U32(ctx, 31, 0x191D10u);
    ctx->pc = 0x191D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D08u;
    // 0x191d0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193610u, 0x191D08u, 0x191D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D10u;
}
