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

// Function: entry_0020a598
// Address: 0x20a598 - 0x20a640
void entry_0020a598_0x20a598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a598_0x20a598");
#endif

    ctx->pc = 0x20a598u;

    // 0x20a598: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x20a598u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x20a59c: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x20a59cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x20a5a0: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x20a5a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x20a5a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20a5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20a5a8: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x20a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x20a5ac: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20a5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20a5b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20a5b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a5b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20a5b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20a5b8: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x20a5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x20a5bc: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x20a5bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x20a5c0: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x20a5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x20a5c4: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x20a5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x20a5c8: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x20a5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x20a5cc: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x20a5ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
    // 0x20a5d0: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x20a5d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20a5d4: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x20a5d4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x20a5d8: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x20a5d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x20a5dc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x20a5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x20a5e0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x20a5e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x20a5e4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x20a5e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a5e8: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x20a5e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x20a5ec: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x20a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x20a5f0: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x20a5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x20a5f4: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x20a5f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x20a5f8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x20a5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x20a5fc: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x20a5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x20a600: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x20a600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x20a604: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x20a604u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x20a608: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x20a608u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x20a60c: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x20a60cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x20a610: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x20a610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x20a614: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x20a614u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
    // 0x20a618: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x20a618u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x20a61c: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x20a61cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
    // 0x20a620: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x20a620u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x20a624: 0xfe090058  sd          $t1, 0x58($s0)
    ctx->pc = 0x20a624u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
    // 0x20a628: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x20a628u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
    // 0x20a62c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A62Cu;
    {
        const bool branch_taken_0x20a62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A62Cu;
        // 0x20a630: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a62c) {
            ctx->pc = 0x20A640u;
            return;
        }
    }
    ctx->pc = 0x20A634u;
    // 0x20a634: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x20a634u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x20a638: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20A638u;
    {
        const bool branch_taken_0x20a638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A638u;
        // 0x20a63c: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a638) {
            ctx->pc = 0x20A64Cu;
            return;
        }
    }
    ctx->pc = 0x20A640u;
}
