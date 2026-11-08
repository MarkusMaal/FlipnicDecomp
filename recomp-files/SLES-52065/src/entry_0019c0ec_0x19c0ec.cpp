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

// Function: entry_0019c0ec
// Address: 0x19c0ec - 0x19c144
void entry_0019c0ec_0x19c0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c0ec_0x19c0ec");
#endif

    switch (ctx->pc) {
        case 0x19c13cu: goto label_19c13c;
        default: break;
    }

    ctx->pc = 0x19c0ecu;

    // 0x19c0ec: 0x92220aac  lbu         $v0, 0xAAC($s1)
    ctx->pc = 0x19c0ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2732)));
    // 0x19c0f0: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x19C0F0u;
    {
        const bool branch_taken_0x19c0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c0f0) {
            ctx->pc = 0x19C328u;
            return;
        }
    }
    ctx->pc = 0x19C0F8u;
    // 0x19c0f8: 0x8e220914  lw          $v0, 0x914($s1)
    ctx->pc = 0x19c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2324)));
    // 0x19c0fc: 0xae220910  sw          $v0, 0x910($s1)
    ctx->pc = 0x19c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2320), GPR_U32(ctx, 2));
    // 0x19c100: 0x8e220928  lw          $v0, 0x928($s1)
    ctx->pc = 0x19c100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
    // 0x19c104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19c104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19c108: 0xae220928  sw          $v0, 0x928($s1)
    ctx->pc = 0x19c108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2344), GPR_U32(ctx, 2));
    // 0x19c10c: 0x8e220928  lw          $v0, 0x928($s1)
    ctx->pc = 0x19c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
    // 0x19c110: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x19c110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19c114: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x19C114u;
    {
        const bool branch_taken_0x19c114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c114) {
            ctx->pc = 0x19C144u;
            return;
        }
    }
    ctx->pc = 0x19C11Cu;
    // 0x19c11c: 0x8e230914  lw          $v1, 0x914($s1)
    ctx->pc = 0x19c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2324)));
    // 0x19c120: 0x8e220918  lw          $v0, 0x918($s1)
    ctx->pc = 0x19c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2328)));
    // 0x19c124: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x19c124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19c128: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C128u;
    {
        const bool branch_taken_0x19c128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c128) {
            ctx->pc = 0x19C144u;
            return;
        }
    }
    ctx->pc = 0x19C130u;
    // 0x19c130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c134: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19C134u;
    SET_GPR_U32(ctx, 31, 0x19C13Cu);
    ctx->pc = 0x19C138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C134u;
    // 0x19c138: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19C134u, 0x19C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C13Cu;
label_19c13c:
    // 0x19c13c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x19C13Cu;
    {
        const bool branch_taken_0x19c13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c13c) {
            ctx->pc = 0x19C328u;
            return;
        }
    }
    ctx->pc = 0x19C144u;
}
