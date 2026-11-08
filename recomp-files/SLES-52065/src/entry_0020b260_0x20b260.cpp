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

// Function: entry_0020b260
// Address: 0x20b260 - 0x20b2d8
void entry_0020b260_0x20b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b260_0x20b260");
#endif

    ctx->pc = 0x20b260u;

label_20b260:
    // 0x20b260: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b264: 0x0  nop
    ctx->pc = 0x20b264u;
    // NOP
    // 0x20b268: 0x0  nop
    ctx->pc = 0x20b268u;
    // NOP
    // 0x20b26c: 0x0  nop
    ctx->pc = 0x20b26cu;
    // NOP
    // 0x20b270: 0x0  nop
    ctx->pc = 0x20b270u;
    // NOP
    // 0x20b274: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B274u;
    {
        const bool branch_taken_0x20b274 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b274) {
            ctx->pc = 0x20B260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b260;
        }
    }
    ctx->pc = 0x20B27Cu;
    // 0x20b27c: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x20B27Cu;
    {
        const bool branch_taken_0x20b27c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B27Cu;
        // 0x20b280: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b27c) {
            ctx->pc = 0x20B2D8u;
            return;
        }
    }
    ctx->pc = 0x20B284u;
    // 0x20b284: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x20B284u;
    {
        const bool branch_taken_0x20b284 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B284u;
        // 0x20b288: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b284) {
            ctx->pc = 0x20B2DCu;
            return;
        }
    }
    ctx->pc = 0x20B28Cu;
    // 0x20b28c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b290: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20b290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20b294: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x20b294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x20b298: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x20b298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x20b29c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x20b29cu;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 17));
    // 0x20b2a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20b2a4: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x20b2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x20b2a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20b2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b2ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20b2b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x20b2b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b2b4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20b2b4u;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 2));
    // 0x20b2b8: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x20b2b8u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 18));
    // 0x20b2bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20b2bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b2c0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x20b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20b2c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20b2c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b2c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b2c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b2cc: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x20b2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x20b2d0: 0x8082c10  j           func_20B040
    ctx->pc = 0x20B2D0u;
    ctx->pc = 0x20B2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B2D0u;
    // 0x20b2d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B040u;
    FUN_0020b040_0x20b040(rdram, ctx, runtime); return;
    ctx->pc = 0x20B2D8u;
}
