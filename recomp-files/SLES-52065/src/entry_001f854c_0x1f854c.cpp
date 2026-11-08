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

// Function: entry_001f854c
// Address: 0x1f854c - 0x1f85b8
void entry_001f854c_0x1f854c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f854c_0x1f854c");
#endif

    switch (ctx->pc) {
        case 0x1f8560u: goto label_1f8560;
        case 0x1f85a0u: goto label_1f85a0;
        default: break;
    }

    ctx->pc = 0x1f854cu;

    // 0x1f854c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f854cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8550: 0x261016c4  addiu       $s0, $s0, 0x16C4
    ctx->pc = 0x1f8550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5828));
    // 0x1f8554: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1f8554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1f8558: 0xc080804  jal         func_202010
    ctx->pc = 0x1F8558u;
    SET_GPR_U32(ctx, 31, 0x1F8560u);
    ctx->pc = 0x1F855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8558u;
    // 0x1f855c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F8558u, 0x1F8560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8560u;
label_1f8560:
    // 0x1f8560: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x1f8560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1f8564: 0xae14ffec  sw          $s4, -0x14($s0)
    ctx->pc = 0x1f8564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 20));
    // 0x1f8568: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x1f8568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x1f856c: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f856cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f8570: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x1f8570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
    // 0x1f8574: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f8574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8578: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x1f8578u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f857c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1f857cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8580: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f8580u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f8584: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f8584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8588: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f858c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f858cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8590: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1f8590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1f8594: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f8594u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8598: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F8598u;
    SET_GPR_U32(ctx, 31, 0x1F85A0u);
    ctx->pc = 0x1F859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8598u;
    // 0x1f859c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F8598u, 0x1F85A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F85A0u;
label_1f85a0:
    // 0x1f85a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f85a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f85a4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F85A4u;
    {
        const bool branch_taken_0x1f85a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85A4u;
        // 0x1f85a8: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85a4) {
            ctx->pc = 0x1F85B8u;
            return;
        }
    }
    ctx->pc = 0x1F85ACu;
    // 0x1f85ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f85acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f85b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F85B0u;
    {
        const bool branch_taken_0x1f85b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85B0u;
        // 0x1f85b4: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85b0) {
            ctx->pc = 0x1F85C0u;
            return;
        }
    }
    ctx->pc = 0x1F85B8u;
}
