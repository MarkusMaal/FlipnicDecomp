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

// Function: entry_0021ab6c
// Address: 0x21ab6c - 0x21ace0
void entry_0021ab6c_0x21ab6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ab6c_0x21ab6c");
#endif

    ctx->pc = 0x21ab6cu;

    // 0x21ab6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ab6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ab70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ab70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ab74: 0x3e00008  jr          $ra
    ctx->pc = 0x21AB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB74u;
        // 0x21ab78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AB7Cu;
    // 0x21ab7c: 0x0  nop
    ctx->pc = 0x21ab7cu;
    // NOP
    // 0x21ab80: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x21ab80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
    // 0x21ab84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21ab88: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x21ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x800747A8u));
    // 0x21ab8c: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x21ab8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x21ab90: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x21ab90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x21ab94: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x21ab94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x21ab98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21ab98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21ab9c: 0x2408fff7  addiu       $t0, $zero, -0x9
    ctx->pc = 0x21ab9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x21aba0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21aba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21aba4: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x21aba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x21aba8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21abac: 0x240ae01f  addiu       $t2, $zero, -0x1FE1
    ctx->pc = 0x21abacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959135));
    // 0x21abb0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x21abb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x21abb4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x21abb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x21abb8: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x21abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
    // 0x21abbc: 0x34c61fff  ori         $a2, $a2, 0x1FFF
    ctx->pc = 0x21abbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8191);
    // 0x21abc0: 0x24a747a8  addiu       $a3, $a1, 0x47A8
    ctx->pc = 0x21abc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 18344));
    // 0x21abc4: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x21abc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x21abc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21abc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21abcc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21abccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21abd0: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x21abd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x21abd4: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x21abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
    // 0x21abd8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x21abd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x21abdc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21abdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21abe0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21abe4: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x21abe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x21abe8: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x21abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
    // 0x21abec: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x21abecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x21abf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21abf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21abf4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21abf8: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x21abf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x21abfc: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x21abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
    // 0x21ac00: 0x30421fe0  andi        $v0, $v0, 0x1FE0
    ctx->pc = 0x21ac00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8160);
    // 0x21ac04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ac04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ac08: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21ac0c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x21ac0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x21ac10: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x21ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
    // 0x21ac14: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x21ac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x21ac18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ac18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ac1c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21ac20: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x21ac20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x21ac24: 0x3e00008  jr          $ra
    ctx->pc = 0x21AC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC24u;
        // 0x21ac28: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AC2Cu;
    // 0x21ac2c: 0x0  nop
    ctx->pc = 0x21ac2cu;
    // NOP
    // 0x21ac30: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x21ac30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
    // 0x21ac34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21ac38: 0x8ca347a8  lw          $v1, 0x47A8($a1)
    ctx->pc = 0x21ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x800747A8u));
    // 0x21ac3c: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x21ac3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x21ac40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21ac40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21ac44: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x21ac44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x21ac48: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x21ac48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x21ac4c: 0x2408fff7  addiu       $t0, $zero, -0x9
    ctx->pc = 0x21ac4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x21ac50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ac50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ac54: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x21ac54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x21ac58: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x21ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
    // 0x21ac5c: 0x240ae01f  addiu       $t2, $zero, -0x1FE1
    ctx->pc = 0x21ac5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959135));
    // 0x21ac60: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x21ac60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x21ac64: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x21ac64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x21ac68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21ac6c: 0x34c61fff  ori         $a2, $a2, 0x1FFF
    ctx->pc = 0x21ac6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8191);
    // 0x21ac70: 0x24a747a8  addiu       $a3, $a1, 0x47A8
    ctx->pc = 0x21ac70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 18344));
    // 0x21ac74: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x21ac74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x21ac78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ac78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ac7c: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x21ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
    // 0x21ac80: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x21ac80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x21ac84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21ac88: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x21ac88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x21ac8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ac8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ac90: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x21ac90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
    // 0x21ac94: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x21ac94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x21ac98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21ac9c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x21ac9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x21aca0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21aca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21aca4: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x21aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
    // 0x21aca8: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x21aca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x21acac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21acacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21acb0: 0x30421fe0  andi        $v0, $v0, 0x1FE0
    ctx->pc = 0x21acb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8160);
    // 0x21acb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21acb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21acb8: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x21acb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
    // 0x21acbc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x21acbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x21acc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21acc4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x21acc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x21acc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21acc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21accc: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x21acccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
    // 0x21acd0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x21acd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x21acd4: 0x3e00008  jr          $ra
    ctx->pc = 0x21ACD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACD4u;
        // 0x21acd8: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ACD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21ACDCu;
    // 0x21acdc: 0x0  nop
    ctx->pc = 0x21acdcu;
    // NOP
    ctx->pc = 0x21ace0u;
}
