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

// Function: entry_001daf34
// Address: 0x1daf34 - 0x1db204
void entry_001daf34_0x1daf34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001daf34_0x1daf34");
#endif

    ctx->pc = 0x1daf34u;

    // 0x1daf34: 0x7c000b3  bltz        $fp, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1DAF34u;
    {
        const bool branch_taken_0x1daf34 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x1DAF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF34u;
        // 0x1daf38: 0x1e10c0  sll         $v0, $fp, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf34) {
            ctx->pc = 0x1DB204u;
            return;
        }
    }
    ctx->pc = 0x1DAF3Cu;
    // 0x1daf3c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1daf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1daf40: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x1daf40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1daf44: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1daf44u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1daf48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1daf48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1daf4c: 0x24637330  addiu       $v1, $v1, 0x7330
    ctx->pc = 0x1daf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1daf50: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1daf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1daf54: 0x25297344  addiu       $t1, $t1, 0x7344
    ctx->pc = 0x1daf54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29508));
    // 0x1daf58: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1daf58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1daf5c: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x1daf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1daf60: 0x244a00b0  addiu       $t2, $v0, 0xB0
    ctx->pc = 0x1daf60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1daf64: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1daf64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1daf68: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1daf68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1daf6c: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1daf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1daf70: 0xafa90054  sw          $t1, 0x54($sp)
    ctx->pc = 0x1daf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 9));
    // 0x1daf74: 0x2054821  addu        $t1, $s0, $a1
    ctx->pc = 0x1daf74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1daf78: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x1daf78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1daf7c: 0xafa9005c  sw          $t1, 0x5C($sp)
    ctx->pc = 0x1daf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 9));
    // 0x1daf80: 0x244c0040  addiu       $t4, $v0, 0x40
    ctx->pc = 0x1daf80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1daf84: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x1daf84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1daf88: 0x2234821  addu        $t1, $s1, $v1
    ctx->pc = 0x1daf88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1daf8c: 0x244d0080  addiu       $t5, $v0, 0x80
    ctx->pc = 0x1daf8cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1daf90: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x1daf90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1daf94: 0xafab0058  sw          $t3, 0x58($sp)
    ctx->pc = 0x1daf94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 11));
    // 0x1daf98: 0xafa90020  sw          $t1, 0x20($sp)
    ctx->pc = 0x1daf98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 9));
    // 0x1daf9c: 0x1a34821  addu        $t1, $t5, $v1
    ctx->pc = 0x1daf9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1dafa0: 0x24480090  addiu       $t0, $v0, 0x90
    ctx->pc = 0x1dafa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dafa4: 0x244f0050  addiu       $t7, $v0, 0x50
    ctx->pc = 0x1dafa4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1dafa8: 0x1845821  addu        $t3, $t4, $a0
    ctx->pc = 0x1dafa8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1dafac: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x1dafacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x1dafb0: 0xafab001c  sw          $t3, 0x1C($sp)
    ctx->pc = 0x1dafb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 11));
    // 0x1dafb4: 0x1e45821  addu        $t3, $t7, $a0
    ctx->pc = 0x1dafb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1dafb8: 0x24530070  addiu       $s3, $v0, 0x70
    ctx->pc = 0x1dafb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1dafbc: 0x1074821  addu        $t1, $t0, $a3
    ctx->pc = 0x1dafbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1dafc0: 0x244e00a0  addiu       $t6, $v0, 0xA0
    ctx->pc = 0x1dafc0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1dafc4: 0xafab0024  sw          $t3, 0x24($sp)
    ctx->pc = 0x1dafc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
    // 0x1dafc8: 0xafa90038  sw          $t1, 0x38($sp)
    ctx->pc = 0x1dafc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 9));
    // 0x1dafcc: 0x2634821  addu        $t1, $s3, $v1
    ctx->pc = 0x1dafccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1dafd0: 0x1c45821  addu        $t3, $t6, $a0
    ctx->pc = 0x1dafd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1dafd4: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x1dafd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x1dafd8: 0x24550060  addiu       $s5, $v0, 0x60
    ctx->pc = 0x1dafd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dafdc: 0xafab0034  sw          $t3, 0x34($sp)
    ctx->pc = 0x1dafdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 11));
    // 0x1dafe0: 0xafa90040  sw          $t1, 0x40($sp)
    ctx->pc = 0x1dafe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
    // 0x1dafe4: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x1dafe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dafe8: 0x245200d0  addiu       $s2, $v0, 0xD0
    ctx->pc = 0x1dafe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1dafec: 0x2a45821  addu        $t3, $s5, $a0
    ctx->pc = 0x1dafecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1daff0: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x1daff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1daff4: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x1daff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1daff8: 0xafab003c  sw          $t3, 0x3C($sp)
    ctx->pc = 0x1daff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 11));
    // 0x1daffc: 0x2465821  addu        $t3, $s2, $a2
    ctx->pc = 0x1daffcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1db000: 0x2074821  addu        $t1, $s0, $a3
    ctx->pc = 0x1db000u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1db004: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1db004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1db008: 0xafab0048  sw          $t3, 0x48($sp)
    ctx->pc = 0x1db008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 11));
    // 0x1db00c: 0x455821  addu        $t3, $v0, $a1
    ctx->pc = 0x1db00cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1db010: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x1db010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x1db014: 0x2274821  addu        $t1, $s1, $a3
    ctx->pc = 0x1db014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1db018: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x1db018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x1db01c: 0x1045821  addu        $t3, $t0, $a0
    ctx->pc = 0x1db01cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1db020: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x1db020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x1db024: 0x1e34821  addu        $t1, $t7, $v1
    ctx->pc = 0x1db024u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x1db028: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x1db028u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db02c: 0x183c021  addu        $t8, $t4, $v1
    ctx->pc = 0x1db02cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1db030: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x1db030u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1db034: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1db034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1db038: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1db038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x1db03c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1db03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1db040: 0xafab0030  sw          $t3, 0x30($sp)
    ctx->pc = 0x1db040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 11));
    // 0x1db044: 0x1855821  addu        $t3, $t4, $a1
    ctx->pc = 0x1db044u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1db048: 0x47c821  addu        $t9, $v0, $a3
    ctx->pc = 0x1db048u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1db04c: 0xafab0014  sw          $t3, 0x14($sp)
    ctx->pc = 0x1db04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 11));
    // 0x1db050: 0x24637344  addiu       $v1, $v1, 0x7344
    ctx->pc = 0x1db050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29508));
    // 0x1db054: 0x320582d  daddu       $t3, $t9, $zero
    ctx->pc = 0x1db054u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db058: 0xafab0028  sw          $t3, 0x28($sp)
    ctx->pc = 0x1db058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
    // 0x1db05c: 0x1055821  addu        $t3, $t0, $a1
    ctx->pc = 0x1db05cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1db060: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1db060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1db064: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x1db064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1db068: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x1db068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x1db06c: 0x2654821  addu        $t1, $s3, $a1
    ctx->pc = 0x1db06cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1db070: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1db070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1db074: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1db074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1db078: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1db078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1db07c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1db07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1db080: 0x224a021  addu        $s4, $s1, $a0
    ctx->pc = 0x1db080u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1db084: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1db084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1db088: 0x1e5b021  addu        $s6, $t7, $a1
    ctx->pc = 0x1db088u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x1db08c: 0x1e77821  addu        $t7, $t7, $a3
    ctx->pc = 0x1db08cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x1db090: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1db090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1db094: 0x2463a000  addiu       $v1, $v1, -0x6000
    ctx->pc = 0x1db094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942720));
    // 0x1db098: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x1db098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1db09c: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1db09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1db0a0: 0xafaa004c  sw          $t2, 0x4C($sp)
    ctx->pc = 0x1db0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 10));
    // 0x1db0a4: 0x240a007f  addiu       $t2, $zero, 0x7F
    ctx->pc = 0x1db0a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1db0a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1db0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1db0ac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1db0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1db0b0: 0x24a5a03c  addiu       $a1, $a1, -0x5FC4
    ctx->pc = 0x1db0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942780));
    // 0x1db0b4: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x1db0b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x1db0b8: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x1db0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x1db0bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1db0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db0c0: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x1db0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x1db0c4: 0x1876021  addu        $t4, $t4, $a3
    ctx->pc = 0x1db0c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x1db0c8: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x1db0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x1db0cc: 0x2679821  addu        $s3, $s3, $a3
    ctx->pc = 0x1db0ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1db0d0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1db0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1db0d4: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1db0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1db0d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db0d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db0dc: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x1db0dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1db0e0: 0x8fab0034  lw          $t3, 0x34($sp)
    ctx->pc = 0x1db0e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1db0e4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1db0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1db0e8: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x1db0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x1db0ec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1db0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1db0f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1db0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1db0f4: 0xaf200000  sw          $zero, 0x0($t9)
    ctx->pc = 0x1db0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
    // 0x1db0f8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1db0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db0fc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1db0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1db100: 0xaee00020  sw          $zero, 0x20($s7)
    ctx->pc = 0x1db100u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 0));
    // 0x1db104: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1db104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1db108: 0x8fab000c  lw          $t3, 0xC($sp)
    ctx->pc = 0x1db108u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1db10c: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1db10cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1db110: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x1db110u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1db114: 0xaf0a0000  sw          $t2, 0x0($t8)
    ctx->pc = 0x1db114u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 10));
    // 0x1db118: 0xae8a0000  sw          $t2, 0x0($s4)
    ctx->pc = 0x1db118u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 10));
    // 0x1db11c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1db11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db120: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x1db120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x1db124: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x1db124u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x1db128: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1db128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1db12c: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x1db12cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x1db130: 0xaecb0000  sw          $t3, 0x0($s6)
    ctx->pc = 0x1db130u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 11));
    // 0x1db134: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1db134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1db138: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x1db138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
    // 0x1db13c: 0x240b1000  addiu       $t3, $zero, 0x1000
    ctx->pc = 0x1db13cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1db140: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x1db140u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x1db144: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x1db144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1db148: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1db148u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1db14c: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x1db14cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x1db150: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x1db150u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1db154: 0xae2b0000  sw          $t3, 0x0($s1)
    ctx->pc = 0x1db154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 11));
    // 0x1db158: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1db158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db15c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1db15cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1db160: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1db160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db164: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1db164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1db168: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1db168u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1db16c: 0xaea90000  sw          $t1, 0x0($s5)
    ctx->pc = 0x1db16cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 9));
    // 0x1db170: 0x8fab0028  lw          $t3, 0x28($sp)
    ctx->pc = 0x1db170u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1db174: 0xad630074  sw          $v1, 0x74($t3)
    ctx->pc = 0x1db174u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 116), GPR_U32(ctx, 3));
    // 0x1db178: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1db178u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1db17c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1db17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db180: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1db180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1db184: 0x8fa9002c  lw          $t1, 0x2C($sp)
    ctx->pc = 0x1db184u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1db188: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1db188u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1db18c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1db18cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1db190: 0x8fab0038  lw          $t3, 0x38($sp)
    ctx->pc = 0x1db190u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1db194: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1db194u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1db198: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1db198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db19c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1db19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1db1a0: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x1db1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1db1a4: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x1db1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x1db1a8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1db1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1db1ac: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x1db1acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x1db1b0: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1db1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1db1b4: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x1db1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1db1b8: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x1db1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1db1bc: 0x8fab0044  lw          $t3, 0x44($sp)
    ctx->pc = 0x1db1bcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1db1c0: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1db1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1db1c4: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1db1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1db1c8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1db1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1db1cc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1db1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1db1d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1db1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1db1d4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1db1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db1d8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1db1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1db1dc: 0x8fa90050  lw          $t1, 0x50($sp)
    ctx->pc = 0x1db1dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1db1e0: 0xe52000c0  swc1        $f0, 0xC0($t1)
    ctx->pc = 0x1db1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 192), bits); }
    // 0x1db1e4: 0x8fab004c  lw          $t3, 0x4C($sp)
    ctx->pc = 0x1db1e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1db1e8: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x1db1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x1db1ec: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1db1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1db1f0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1db1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1db1f4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1db1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1db1f8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1db1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1db1fc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1db1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1db200: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1db200u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x1db204u;
}
