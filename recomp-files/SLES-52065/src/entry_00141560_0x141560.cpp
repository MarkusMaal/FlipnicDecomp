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

// Function: entry_00141560
// Address: 0x141560 - 0x1415ac
void entry_00141560_0x141560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141560_0x141560");
#endif

    ctx->pc = 0x141560u;

    // 0x141560: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x141560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x141564: 0x2a7082b  sltu        $at, $s5, $a3
    ctx->pc = 0x141564u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x141568: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x141568u;
    {
        const bool branch_taken_0x141568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141568) {
            ctx->pc = 0x141668u;
            return;
        }
    }
    ctx->pc = 0x141570u;
    // 0x141570: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x141570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x141574: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x141574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x141578: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x141578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14157c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x14157cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x141580: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x141580u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x141584: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x141584u;
    {
        const bool branch_taken_0x141584 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x141588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141584u;
        // 0x141588: 0xc31821  addu        $v1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141584) {
            ctx->pc = 0x1415ACu;
            return;
        }
    }
    ctx->pc = 0x14158Cu;
    // 0x14158c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x14158cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x141590: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x141590u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x141594: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x141594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x141598: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x141598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14159c: 0xafa70144  sw          $a3, 0x144($sp)
    ctx->pc = 0x14159cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 7));
    // 0x1415a0: 0xafa40148  sw          $a0, 0x148($sp)
    ctx->pc = 0x1415a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 4));
    // 0x1415a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1415A4u;
    {
        const bool branch_taken_0x1415a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1415A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415A4u;
        // 0x1415a8: 0xafb20140  sw          $s2, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415a4) {
            ctx->pc = 0x1415CCu;
            return;
        }
    }
    ctx->pc = 0x1415ACu;
}
