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

// Function: entry_00203b14
// Address: 0x203b14 - 0x203b30
void entry_00203b14_0x203b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203b14_0x203b14");
#endif

    switch (ctx->pc) {
        case 0x203b1cu: goto label_203b1c;
        default: break;
    }

    ctx->pc = 0x203b14u;

    // 0x203b14: 0xc08180c  jal         func_206030
    ctx->pc = 0x203B14u;
    SET_GPR_U32(ctx, 31, 0x203B1Cu);
    ctx->pc = 0x203B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B14u;
    // 0x203b18: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206030u, 0x203B14u, 0x203B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B1Cu;
label_203b1c:
    // 0x203b1c: 0x1440051c  bnez        $v0, . + 4 + (0x51C << 2)
    ctx->pc = 0x203B1Cu;
    {
        const bool branch_taken_0x203b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B1Cu;
        // 0x203b20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b1c) {
            ctx->pc = 0x204F90u;
            return;
        }
    }
    ctx->pc = 0x203B24u;
    // 0x203b24: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x203b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x203b28: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x203b28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x203b2c: 0x3063001a  andi        $v1, $v1, 0x1A
    ctx->pc = 0x203b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
    ctx->pc = 0x203b30u;
}
