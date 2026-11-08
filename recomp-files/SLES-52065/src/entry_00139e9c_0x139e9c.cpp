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

// Function: entry_00139e9c
// Address: 0x139e9c - 0x139f7c
void entry_00139e9c_0x139e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139e9c_0x139e9c");
#endif

    ctx->pc = 0x139e9cu;

label_139e9c:
    // 0x139e9c: 0x8e270054  lw          $a3, 0x54($s1)
    ctx->pc = 0x139e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x139ea0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x139ea0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x139ea4: 0x18d302b  sltu        $a2, $t4, $t5
    ctx->pc = 0x139ea4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x139ea8: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x139ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x139eac: 0x8cf00088  lw          $s0, 0x88($a3)
    ctx->pc = 0x139eacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x139eb0: 0xa20b0003  sb          $t3, 0x3($s0)
    ctx->pc = 0x139eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 11));
    // 0x139eb4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x139eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139eb8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x139eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x139ebc: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x139ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x139ec0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x139ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x139ec4: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x139ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x139ec8: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x139ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x139ecc: 0x8e2e000c  lw          $t6, 0xC($s1)
    ctx->pc = 0x139eccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x139ed0: 0x77880  sll         $t7, $a3, 2
    ctx->pc = 0x139ed0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x139ed4: 0xa2090013  sb          $t1, 0x13($s0)
    ctx->pc = 0x139ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 9));
    // 0x139ed8: 0x73c80  sll         $a3, $a3, 18
    ctx->pc = 0x139ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 18));
    // 0x139edc: 0xa2000012  sb          $zero, 0x12($s0)
    ctx->pc = 0x139edcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x139ee0: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x139ee0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x139ee4: 0xae0e0014  sw          $t6, 0x14($s0)
    ctx->pc = 0x139ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 14));
    // 0x139ee8: 0xa60f0010  sh          $t7, 0x10($s0)
    ctx->pc = 0x139ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 15));
    // 0x139eec: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x139eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x139ef0: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x139ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
    // 0x139ef4: 0xa2000022  sb          $zero, 0x22($s0)
    ctx->pc = 0x139ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x139ef8: 0xa2080023  sb          $t0, 0x23($s0)
    ctx->pc = 0x139ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 8));
    // 0x139efc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x139efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x139f00: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x139f00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x139f04: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x139f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x139f08: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x139f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x139f0c: 0x8e270054  lw          $a3, 0x54($s1)
    ctx->pc = 0x139f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x139f10: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x139f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x139f14: 0x8cf0008c  lw          $s0, 0x8C($a3)
    ctx->pc = 0x139f14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x139f18: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x139f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x139f1c: 0xa20b0003  sb          $t3, 0x3($s0)
    ctx->pc = 0x139f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 11));
    // 0x139f20: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x139f20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139f24: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x139f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x139f28: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x139f28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x139f2c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x139f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x139f30: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x139f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x139f34: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x139f34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x139f38: 0x8e2e0010  lw          $t6, 0x10($s1)
    ctx->pc = 0x139f38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x139f3c: 0x77880  sll         $t7, $a3, 2
    ctx->pc = 0x139f3cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x139f40: 0xa2090013  sb          $t1, 0x13($s0)
    ctx->pc = 0x139f40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 9));
    // 0x139f44: 0x73c80  sll         $a3, $a3, 18
    ctx->pc = 0x139f44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 18));
    // 0x139f48: 0xa2000012  sb          $zero, 0x12($s0)
    ctx->pc = 0x139f48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x139f4c: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x139f4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x139f50: 0xae0e0014  sw          $t6, 0x14($s0)
    ctx->pc = 0x139f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 14));
    // 0x139f54: 0xa60f0010  sh          $t7, 0x10($s0)
    ctx->pc = 0x139f54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 15));
    // 0x139f58: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x139f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x139f5c: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x139f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
    // 0x139f60: 0xa2000022  sb          $zero, 0x22($s0)
    ctx->pc = 0x139f60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x139f64: 0xa2080023  sb          $t0, 0x23($s0)
    ctx->pc = 0x139f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 8));
    // 0x139f68: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x139f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x139f6c: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x139f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x139f70: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x139f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x139f74: 0x14c0ffc9  bnez        $a2, . + 4 + (-0x37 << 2)
    ctx->pc = 0x139F74u;
    {
        const bool branch_taken_0x139f74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x139F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F74u;
        // 0x139f78: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f74) {
            ctx->pc = 0x139E9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139e9c;
        }
    }
    ctx->pc = 0x139F7Cu;
}
