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

// Function: entry_0015b924
// Address: 0x15b924 - 0x15b94c
void entry_0015b924_0x15b924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b924_0x15b924");
#endif

    ctx->pc = 0x15b924u;

    // 0x15b924: 0x86240214  lh          $a0, 0x214($s1)
    ctx->pc = 0x15b924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x15b928: 0x240307f8  addiu       $v1, $zero, 0x7F8
    ctx->pc = 0x15b928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    // 0x15b92c: 0xa6240216  sh          $a0, 0x216($s1)
    ctx->pc = 0x15b92cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 534), (uint16_t)GPR_U32(ctx, 4));
    // 0x15b930: 0x92040023  lbu         $a0, 0x23($s0)
    ctx->pc = 0x15b930u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x15b934: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x15b934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x15b938: 0xa6240212  sh          $a0, 0x212($s1)
    ctx->pc = 0x15b938u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 530), (uint16_t)GPR_U32(ctx, 4));
    // 0x15b93c: 0x86240212  lh          $a0, 0x212($s1)
    ctx->pc = 0x15b93cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 530)));
    // 0x15b940: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B940u;
    {
        const bool branch_taken_0x15b940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B940u;
        // 0x15b944: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b940) {
            ctx->pc = 0x15B94Cu;
            return;
        }
    }
    ctx->pc = 0x15B948u;
    // 0x15b948: 0xa6230212  sh          $v1, 0x212($s1)
    ctx->pc = 0x15b948u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 530), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x15b94cu;
}
