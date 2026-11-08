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

// Function: entry_00194254
// Address: 0x194254 - 0x1942a4
void entry_00194254_0x194254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194254_0x194254");
#endif

    ctx->pc = 0x194254u;

    // 0x194254: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x194254u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x194258: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x194258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x19425c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x19425cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x194260: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x194260u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x194264: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x194264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x194268: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x194268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x19426c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x19426cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x194270: 0x90c6003f  lbu         $a2, 0x3F($a2)
    ctx->pc = 0x194270u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 63)));
    // 0x194274: 0x14a6003d  bne         $a1, $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x194274u;
    {
        const bool branch_taken_0x194274 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x194274) {
            ctx->pc = 0x19436Cu;
            return;
        }
    }
    ctx->pc = 0x19427Cu;
    // 0x19427c: 0xae800334  sw          $zero, 0x334($s4)
    ctx->pc = 0x19427cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 820), GPR_U32(ctx, 0));
    // 0x194280: 0xae800338  sw          $zero, 0x338($s4)
    ctx->pc = 0x194280u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 824), GPR_U32(ctx, 0));
    // 0x194284: 0x8e830668  lw          $v1, 0x668($s4)
    ctx->pc = 0x194284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1640)));
    // 0x194288: 0xae830664  sw          $v1, 0x664($s4)
    ctx->pc = 0x194288u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1636), GPR_U32(ctx, 3));
    // 0x19428c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19428cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x194290: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x194290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x194294: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x194294u;
    {
        const bool branch_taken_0x194294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194294) {
            ctx->pc = 0x194304u;
            return;
        }
    }
    ctx->pc = 0x19429Cu;
    // 0x19429c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19429Cu;
    {
        const bool branch_taken_0x19429c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1942A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19429Cu;
        // 0x1942a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19429c) {
            ctx->pc = 0x1942F4u;
            return;
        }
    }
    ctx->pc = 0x1942A4u;
}
