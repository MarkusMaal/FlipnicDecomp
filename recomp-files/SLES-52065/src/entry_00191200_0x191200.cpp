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

// Function: entry_00191200
// Address: 0x191200 - 0x191240
void entry_00191200_0x191200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191200_0x191200");
#endif

    switch (ctx->pc) {
        case 0x191210u: goto label_191210;
        default: break;
    }

    ctx->pc = 0x191200u;

label_191200:
    // 0x191200: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x191200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_191204:
    // 0x191204: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x191204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_191208:
    // 0x191208: 0xc057040  jal         func_15C100
label_19120c:
    if (ctx->pc == 0x19120Cu) {
        ctx->pc = 0x19120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191208u;
        // 0x19120c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191210u;
        goto label_191210;
    }
    ctx->pc = 0x191208u;
    SET_GPR_U32(ctx, 31, 0x191210u);
    ctx->pc = 0x19120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191208u;
    // 0x19120c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x191208u, 0x191210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191210u;
label_191210:
    // 0x191210: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x191210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_191214:
    // 0x191214: 0x20630005  addi        $v1, $v1, 0x5
    ctx->pc = 0x191214u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)5, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_191218:
    // 0x191218: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x191218u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_19121c:
    // 0x19121c: 0x1020011e  beqz        $at, . + 4 + (0x11E << 2)
label_191220:
    if (ctx->pc == 0x191220u) {
        ctx->pc = 0x191224u;
        goto label_191224;
    }
    ctx->pc = 0x19121Cu;
    {
        const bool branch_taken_0x19121c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19121c) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x191224u;
label_191224:
    // 0x191224: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x191224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_191228:
    // 0x191228: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x191228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19122c:
    // 0x19122c: 0x2484fe20  addiu       $a0, $a0, -0x1E0
    ctx->pc = 0x19122cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966816));
label_191230:
    // 0x191230: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191234:
    // 0x191234: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x191234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_191238:
    // 0x191238: 0x600008  jr          $v1
label_19123c:
    if (ctx->pc == 0x19123Cu) {
        ctx->pc = 0x191240u;
        goto label_fallthrough_0x191238;
    }
    ctx->pc = 0x191238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191238u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x191238:
    ctx->pc = 0x191240u;
}
