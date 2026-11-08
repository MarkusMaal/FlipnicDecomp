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

// Function: entry_001a5854
// Address: 0x1a5854 - 0x1a58e8
void entry_001a5854_0x1a5854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5854_0x1a5854");
#endif

    ctx->pc = 0x1a5854u;

    // 0x1a5854: 0xbd3821  addu        $a3, $a1, $sp
    ctx->pc = 0x1a5854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1a5858: 0x8ce70060  lw          $a3, 0x60($a3)
    ctx->pc = 0x1a5858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x1a585c: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A585Cu;
    {
        const bool branch_taken_0x1a585c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A585Cu;
        // 0x1a5860: 0x2054021  addu        $t0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a585c) {
            ctx->pc = 0x1A58E8u;
            return;
        }
    }
    ctx->pc = 0x1A5864u;
    // 0x1a5864: 0x8d080760  lw          $t0, 0x760($t0)
    ctx->pc = 0x1a5864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1888)));
    // 0x1a5868: 0x1107001f  beq         $t0, $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A5868u;
    {
        const bool branch_taken_0x1a5868 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x1A586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5868u;
        // 0x1a586c: 0x74880  sll         $t1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5868) {
            ctx->pc = 0x1A58E8u;
            return;
        }
    }
    ctx->pc = 0x1A5870u;
    // 0x1a5870: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x1a5870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a5874: 0x13d5821  addu        $t3, $t1, $sp
    ctx->pc = 0x1a5874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x1a5878: 0x8d6a00ac  lw          $t2, 0xAC($t3)
    ctx->pc = 0x1a5878u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 172)));
    // 0x1a587c: 0x1004821  addu        $t1, $t0, $zero
    ctx->pc = 0x1a587cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 0)));
    // 0x1a5880: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1a5880u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1a5884: 0xad6a00ac  sw          $t2, 0xAC($t3)
    ctx->pc = 0x1a5884u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 172), GPR_U32(ctx, 10));
    // 0x1a5888: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x1a5888u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1a588c: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x1a588cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1a5890: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x1a5890u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1a5894: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1a5894u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1a5898: 0x13d4821  addu        $t1, $t1, $sp
    ctx->pc = 0x1a5898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x1a589c: 0x20a5021  addu        $t2, $s0, $t2
    ctx->pc = 0x1a589cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1a58a0: 0x8d4a0688  lw          $t2, 0x688($t2)
    ctx->pc = 0x1a58a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1672)));
    // 0x1a58a4: 0xad2a0080  sw          $t2, 0x80($t1)
    ctx->pc = 0x1a58a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 128), GPR_U32(ctx, 10));
    // 0x1a58a8: 0x8d0a0004  lw          $t2, 0x4($t0)
    ctx->pc = 0x1a58a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1a58ac: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x1a58acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1a58b0: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x1a58b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1a58b4: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1a58b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1a58b8: 0x13d4821  addu        $t1, $t1, $sp
    ctx->pc = 0x1a58b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x1a58bc: 0x20a5021  addu        $t2, $s0, $t2
    ctx->pc = 0x1a58bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1a58c0: 0x8d4a0688  lw          $t2, 0x688($t2)
    ctx->pc = 0x1a58c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1672)));
    // 0x1a58c4: 0xad2a0080  sw          $t2, 0x80($t1)
    ctx->pc = 0x1a58c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 128), GPR_U32(ctx, 10));
    // 0x1a58c8: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x1a58c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1a58cc: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x1a58ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a58d0: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x1a58d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1a58d4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1a58d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a58d8: 0x11d4021  addu        $t0, $t0, $sp
    ctx->pc = 0x1a58d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x1a58dc: 0x2094821  addu        $t1, $s0, $t1
    ctx->pc = 0x1a58dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1a58e0: 0x8d290688  lw          $t1, 0x688($t1)
    ctx->pc = 0x1a58e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1672)));
    // 0x1a58e4: 0xad090080  sw          $t1, 0x80($t0)
    ctx->pc = 0x1a58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 9));
    ctx->pc = 0x1a58e8u;
}
