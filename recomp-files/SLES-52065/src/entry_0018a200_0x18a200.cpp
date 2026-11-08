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

// Function: entry_0018a200
// Address: 0x18a200 - 0x18a244
void entry_0018a200_0x18a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a200_0x18a200");
#endif

    ctx->pc = 0x18a200u;

    // 0x18a200: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x18a200u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x18a204: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18a204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18a208: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x18a208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18a20c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x18a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x18a210: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x18a210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a214: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18A214u;
    {
        const bool branch_taken_0x18a214 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x18A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A214u;
        // 0x18a218: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a214) {
            ctx->pc = 0x18A244u;
            return;
        }
    }
    ctx->pc = 0x18A21Cu;
    // 0x18a21c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18a220: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A220u;
    {
        const bool branch_taken_0x18a220 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x18A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A220u;
        // 0x18a224: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a220) {
            ctx->pc = 0x18A244u;
            return;
        }
    }
    ctx->pc = 0x18A228u;
    // 0x18a228: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A228u;
    {
        const bool branch_taken_0x18a228 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x18a228) {
            ctx->pc = 0x18A244u;
            return;
        }
    }
    ctx->pc = 0x18A230u;
    // 0x18a230: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x18a230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18a234: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A234u;
    {
        const bool branch_taken_0x18a234 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x18a234) {
            ctx->pc = 0x18A244u;
            return;
        }
    }
    ctx->pc = 0x18A23Cu;
    // 0x18a23c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18A23Cu;
    {
        const bool branch_taken_0x18a23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A23Cu;
        // 0x18a240: 0x8e460060  lw          $a2, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a23c) {
            ctx->pc = 0x18A254u;
            return;
        }
    }
    ctx->pc = 0x18A244u;
}
