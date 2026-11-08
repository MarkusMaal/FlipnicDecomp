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

// Function: entry_00167708
// Address: 0x167708 - 0x167730
void entry_00167708_0x167708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167708_0x167708");
#endif

    ctx->pc = 0x167708u;

    // 0x167708: 0x86240224  lh          $a0, 0x224($s1)
    ctx->pc = 0x167708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x16770c: 0x240307f8  addiu       $v1, $zero, 0x7F8
    ctx->pc = 0x16770cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    // 0x167710: 0xa6240226  sh          $a0, 0x226($s1)
    ctx->pc = 0x167710u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 550), (uint16_t)GPR_U32(ctx, 4));
    // 0x167714: 0x92040023  lbu         $a0, 0x23($s0)
    ctx->pc = 0x167714u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x167718: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x167718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x16771c: 0xa6240222  sh          $a0, 0x222($s1)
    ctx->pc = 0x16771cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 546), (uint16_t)GPR_U32(ctx, 4));
    // 0x167720: 0x86240222  lh          $a0, 0x222($s1)
    ctx->pc = 0x167720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x167724: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x167724u;
    {
        const bool branch_taken_0x167724 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x167728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167724u;
        // 0x167728: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167724) {
            ctx->pc = 0x167730u;
            return;
        }
    }
    ctx->pc = 0x16772Cu;
    // 0x16772c: 0xa6230222  sh          $v1, 0x222($s1)
    ctx->pc = 0x16772cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 546), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x167730u;
}
