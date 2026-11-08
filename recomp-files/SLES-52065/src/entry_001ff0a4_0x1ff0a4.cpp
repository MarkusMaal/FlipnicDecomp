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

// Function: entry_001ff0a4
// Address: 0x1ff0a4 - 0x1ff0fc
void entry_001ff0a4_0x1ff0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff0a4_0x1ff0a4");
#endif

    ctx->pc = 0x1ff0a4u;

    // 0x1ff0a4: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x1ff0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ff0a8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FF0A8u;
    {
        const bool branch_taken_0x1ff0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0A8u;
        // 0x1ff0ac: 0x25c5d9d0  addiu       $a1, $t6, -0x2630 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 4294957520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0a8) {
            ctx->pc = 0x1FF0FCu;
            return;
        }
    }
    ctx->pc = 0x1FF0B0u;
    // 0x1ff0b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff0b4: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x1ff0b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1ff0b8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1ff0b8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1ff0bc: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x1ff0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1ff0c0: 0x36240001  ori         $a0, $s1, 0x1
    ctx->pc = 0x1ff0c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1ff0c4: 0x2113821  addu        $a3, $s0, $s1
    ctx->pc = 0x1ff0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1ff0c8: 0x25c3d9d0  addiu       $v1, $t6, -0x2630
    ctx->pc = 0x1ff0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294957520));
    // 0x1ff0cc: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1ff0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1ff0d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff0d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ff0d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ff0d8: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x1ff0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x1ff0dc: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x1ff0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1ff0e0: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1ff0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1ff0e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ff0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff0e8: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1ff0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x1ff0ec: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1ff0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1ff0f0: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1ff0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1ff0f4: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x1FF0F4u;
    {
        const bool branch_taken_0x1ff0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0F4u;
        // 0x1ff0f8: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0f4) {
            ctx->pc = 0x1FF614u;
            return;
        }
    }
    ctx->pc = 0x1FF0FCu;
}
